#pragma once
ref class Person
{
private:
	int health;
	int travel_radius;
	int contacts;
	bool mask;
	bool vaccination;
public:
	int id;
	void Person::init(int health_f, int travel_radius_f, int contacts_f, bool mask_f, bool vaccin_f);

};

