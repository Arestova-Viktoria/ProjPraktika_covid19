#pragma once
#include "Person.h"
ref class Adult :	//взрослые
	public Person
{
private:
	int risk_adult;
	bool sick_leave; //возможность взять больничный
public:
	int Adult::get_risk();
	bool Adult::bolnichnie();
};

