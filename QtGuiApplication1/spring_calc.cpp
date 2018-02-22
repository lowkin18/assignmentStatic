#include "spring_calc.h"
#include <math.h>


/********************************************************************************************
newton raphson calc

Iterates through the calculation until the center point equals the point of equilibrium
*********************************************************************************************/
void spring_calc::newton_raphson_calc(int x, int y)
{
	_xForce = calc_x_force(_xcenter,_ycenter);
	_yForce = calc_y_force(_xcenter,_ycenter);
	double DFx_Xcenter = calc_DFx_Xcenter();
	double DFx_Ycenter = calc_DFx_Ycenter();
	double DFy_Xcenter = calc_DFy_Xcenter();
	double DFy_Ycenter = calc_DFy_Ycenter();
	
	double newtonXcalc = (_xForce*DFy_Ycenter-_yForce*DFx_Ycenter)/(DFx_Xcenter*DFy_Ycenter-DFy_Xcenter*DFx_Ycenter);
	double newtonYcalc = (-_xForce*DFy_Xcenter+_yForce*DFx_Xcenter)/(DFx_Xcenter*DFy_Ycenter-DFy_Xcenter*DFx_Ycenter);

	_xcenter = _xcenter - newtonXcalc;
	_ycenter = _ycenter - newtonYcalc;
	if (_xForce > 0.005 || _xForce < -0.005 || _yForce > 0.005 || _yForce < -0.005)
	{
	newton_raphson_calc(_xcenter, _ycenter);
	}
}


/********************************************************************************************



*********************************************************************************************/
double spring_calc::calc_x_force(double x_center, double y_center)
{
	double x_force=0;
	double red_angle = atan2((y_center - _spring_red_posy),(x_center-_spring_red_posx));
	double green_angle = atan2((y_center - _spring_green_posy),(x_center - _spring_green_posx));
	double blue_angle = atan2((y_center - _spring_blue_posy),(x_center - _spring_blue_posx));
	double redSpring_x_force = cos(red_angle)*sqrt(pow((x_center - _spring_red_posx), 2) + pow((y_center - _spring_red_posy), 2))*RED_K;
	double greenSpring_x_force = cos(green_angle)*sqrt(pow((x_center - _spring_green_posx), 2) + pow((y_center - _spring_green_posy), 2))*GREEN_K;
	double blueSpring_x_force = cos(blue_angle)*sqrt(pow((x_center - _spring_blue_posx), 2) + pow((y_center - _spring_blue_posy), 2))*BLUE_K;
	x_force = redSpring_x_force + greenSpring_x_force + blueSpring_x_force;
	return x_force;
}


/********************************************************************************************



*********************************************************************************************/
double spring_calc::calc_y_force(double x_center, double y_center)
{
	double y_force = 0;
	double red_angle = atan2((y_center - _spring_red_posy), (x_center - _spring_red_posx));
	double green_angle = atan2((y_center - _spring_green_posy), (x_center - _spring_green_posx));
	double blue_angle = atan2((y_center - _spring_blue_posy), (x_center - _spring_blue_posx));
	double redSpring_x_force = sin(red_angle)*sqrt(pow((x_center - _spring_red_posx), 2) + pow((y_center - _spring_red_posy), 2))*RED_K;
	double greenSpring_x_force = sin(green_angle)*sqrt(pow((x_center - _spring_green_posx), 2) + pow((y_center - _spring_green_posy), 2))*GREEN_K;
	double blueSpring_x_force = sin(blue_angle)*sqrt(pow((x_center - _spring_blue_posx), 2) + pow((y_center - _spring_blue_posy), 2))*BLUE_K;
	y_force = redSpring_x_force + greenSpring_x_force + blueSpring_x_force;
	return y_force;

}

/********************************************************************************************



*********************************************************************************************/
double spring_calc::calc_DFy_Ycenter()
{
	double DFy_Ycenter;
	double yCenter = _ycenter + INCREMENT;
	DFy_Ycenter = calc_y_force(_xcenter,yCenter);
	return DFy_Ycenter;
}


/********************************************************************************************



*********************************************************************************************/
double spring_calc::calc_DFx_Ycenter()
{
	double DFx_Ycenter;
	double yCenter = _ycenter + INCREMENT;
	DFx_Ycenter = calc_x_force(_xcenter, yCenter);
	return DFx_Ycenter;
}



/********************************************************************************************



*********************************************************************************************/
double spring_calc::calc_DFy_Xcenter()
{
	double DFy_Xcenter;
	double xCenter = _xcenter + INCREMENT;
	DFy_Xcenter = calc_y_force(xCenter, _ycenter);
	return DFy_Xcenter;
}


/********************************************************************************************



*********************************************************************************************/
double spring_calc::calc_DFx_Xcenter()
{
	double DFx_Xcenter;
	double xCenter = _xcenter + INCREMENT;
	DFx_Xcenter = calc_x_force(xCenter, _ycenter);
	return DFx_Xcenter;
}

/********************************************************************************************



*********************************************************************************************/
void spring_calc::center_guess()
{
	double spring_red_x = spring_pos1_red[0] * 2.54 + X_SIDE_OFFSET;  //convert peg position to cm position on board
	double spring_red_y = spring_pos1_red[1] * 2.54 + Y_SIDE_OFFSET;
	double spring_green_x = spring_pos2_green[0]*2.54 + X_SIDE_OFFSET;
	double spring_green_y = spring_pos2_green[1]*2.54 + Y_SIDE_OFFSET;
	double spring_blue_x = spring_pos3_blue[0]*2.54 + X_SIDE_OFFSET;
	double spring_blue_y = spring_pos3_blue[1]*2.54 + Y_SIDE_OFFSET;

	_spring_red_posx = spring_red_x;
	_spring_red_posy = spring_red_y;
	_spring_green_posx = spring_green_x;
	_spring_green_posy = spring_green_y;
	_spring_blue_posx = spring_blue_x;
	_spring_blue_posy = spring_blue_y;

	_xcenter = (spring_red_x + spring_green_x + spring_red_x) / 3;
	_ycenter = (spring_red_y + spring_green_y + spring_red_y) / 3;
}


/********************************************************************************************



*********************************************************************************************/
spring_calc::spring_calc()
{
	_xError = 0;
	_yError = 0;
}

/********************************************************************************************



*********************************************************************************************/
spring_calc::~spring_calc()
{
}


/********************************************************************************************



*********************************************************************************************/
void spring_calc::set_pos(int spring, int peg_x, int peg_y)
{
	switch (spring){

		case 0:
			spring_pos1_red[0] = peg_x;
			spring_pos1_red[1] = peg_y;
			break;
		case 1:
			spring_pos2_green[0] = peg_x;
			spring_pos2_green[1] = peg_y;
			break;
		case 2:
			spring_pos3_blue[0] = peg_x;
			spring_pos3_blue[1] = peg_y;
			break;
		}
}


/********************************************************************************************



*********************************************************************************************/
void spring_calc::calc_center()
{
	center_guess();
	newton_raphson_calc(_xcenter, _ycenter);
}


/********************************************************************************************



*********************************************************************************************/
void spring_calc::return_center(double & val_x, double & val_y)
{
	val_x = _xcenter;
	val_y = _ycenter;
}
