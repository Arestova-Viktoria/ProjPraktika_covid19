#pragma once
#include "Person.h"
ref class Children :
	public Person
{
private:
	int risk_child;
	int perenoch;
public:
	int Children::get_risk();
	int Children::check_perenoch();
};

