#pragma once
#include "Person.h"
ref class Aged :	//пожилые
	public Person
{
private:
	int risk_aged;
	bool chronic_sicks;
public:
	int Aged::get_risk();
	bool Aged::check_sicks(int sick);
};

