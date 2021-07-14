#pragma once
ref class Person
{
public:
	int id;
	int health;
	int travel_radius;
	int contacts;
	bool mask;
	bool vaccination;
	void Person::init(int health_f, int travel_radius_f, int contacts_f, bool mask_f, bool vaccin_f);

};

