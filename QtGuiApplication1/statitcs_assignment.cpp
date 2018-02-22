#include "statitcs_assignment.h"
#include "spring_calc.h"


spring_calc springer;

statitcs_assignment::statitcs_assignment(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	springer = spring_calc();
	connect(ui.calculate_btn, SIGNAL(clicked()), this,SLOT(calcOnclickListener()));
	connect(ui.spring1_xpin_etxt, SIGNAL(textChanged()), this, SLOT(redXOnChange()));
	connect(ui.spring1_ypin_etxt, SIGNAL(textChanged()), this, SLOT(redYOnChange()));
	connect(ui.spring2_xpin_etxt, SIGNAL(textChanged()), this, SLOT(greenXOnChange()));
	connect(ui.spring2_ypin_etxt, SIGNAL(textChanged()), this, SLOT(greenYOnChange()));
	connect(ui.spring3_xpin_etxt, SIGNAL(textChanged()), this, SLOT(blueXOnChange()));
	connect(ui.spring3_ypin_etxt, SIGNAL(textChanged()), this, SLOT(blueYOnChange()));

}

void statitcs_assignment::calcOnclickListener()
{
	springer.set_pos(0, _redSpringX, _redSpringY);
	springer.set_pos(1, _greenSpringX, _greenSpringY);
	springer.set_pos(2, _blueSpringX, _blueSpringY);
	springer.calc_center();

	double xCenter = 0;
	double yCenter = 0;
	springer.return_center(xCenter, yCenter);
}

void statitcs_assignment::redXOnChange()
{
	QString value = ui.spring1_xpin_etxt->toPlainText();
	int val = value.toInt();
	_redSpringX = val;
}

void statitcs_assignment::redYOnChange()
{
	QString value = ui.spring1_ypin_etxt->toPlainText();
	int val = value.toInt();
	_redSpringY = val;
}

void statitcs_assignment::greenXOnChange()
{
	QString value = ui.spring2_xpin_etxt->toPlainText();
	int val = value.toInt();
	_greenSpringX = val;
}

void statitcs_assignment::greenYOnChange()
{
	QString value = ui.spring2_ypin_etxt->toPlainText();
	int val = value.toInt();
	_greenSpringY = val;
}

void statitcs_assignment::blueXOnChange()
{	QString value = ui.spring3_xpin_etxt->toPlainText();
	int val = value.toInt();
	_blueSpringX = val;
}

void statitcs_assignment::blueYOnChange()
{
	QString value = ui.spring3_ypin_etxt->toPlainText();
	int val = value.toInt();
	_blueSpringY = val;
}
