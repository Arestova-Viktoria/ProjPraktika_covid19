#pragma once
#include "Person.h"
ref class Children :
	public Person
{
private:
	int risk_child;
	bool perenoch;
public:
	int Children::get_risk();
	bool Children::check_perenoch();
};

