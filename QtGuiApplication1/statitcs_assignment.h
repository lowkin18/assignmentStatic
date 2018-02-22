#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_statitcs_assignment.h"

class statitcs_assignment : public QMainWindow
{
	Q_OBJECT

public:

	int _redSpringX;
	int _redSpringY;
	int _greenSpringX;
	int _greenSpringY;
	int _blueSpringX;
	int _blueSpringY;


	statitcs_assignment(QWidget *parent = Q_NULLPTR);

	public slots:
	void calcOnclickListener();
	void redXOnChange();
	void redYOnChange();
	void greenXOnChange();
	void greenYOnChange();
	void blueXOnChange();
	void blueYOnChange();
	
private:
	Ui::statitcs_assignmentClass ui;
};
