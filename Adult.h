#pragma once
#include "Person.h"
ref class Adult :	//��������
	public Person
{
private:
	int risk_adult;
	bool sick_leave; //����������� ����� ����������
public:
	int Adult::get_risk();
	bool Adult::bolnichnie();
};

