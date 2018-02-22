#pragma once

// MEASUREMENTS IN CM

#define RED_K 3.53 
#define GREEN_K 3.76  
#define BLUE_K 3.76
#define RED_LENGTH 15.0
#define GREEN_LENGTH 14.9
#define BLUE_LENGTH 14.7
#define X_SIDE_OFFSET 1.4
#define Y_SIDE_OFFSET 1.3

#define INCREMENT 0.1


class spring_calc
{


private:
	double _xcenter;
	double _ycenter;
	double _xcenter_1;
	double _ycenter_1;
	double _xForce;
	double _yForce;
	double _xError;
	double _yError;

	double _spring_red_posx;
	double _spring_red_posy;
	double _spring_green_posx;
	double _spring_green_posy;
	double _spring_blue_posx;
	double _spring_blue_posy;


	int spring_pos1_red[2] = { 0,0 };
	int spring_pos2_green[2] = { 0,0 };
	int spring_pos3_blue[2] = { 0,0 };

	void newton_raphson_calc(int x, int y);
	double calc_x_force(double x_center, double y_center);
	double calc_y_force(double x_center, double y_center);
	double calc_DFy_Ycenter();
	double calc_DFx_Ycenter();
	double calc_DFy_Xcenter();
	double calc_DFx_Xcenter();
	void center_guess();

public:
	
	spring_calc();
	~spring_calc();

void set_pos(int spring, int peg_x, int peg_y);
void calc_center();
void return_center(double &val_x, double &val_y);
};

