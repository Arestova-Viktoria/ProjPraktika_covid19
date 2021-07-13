#include "Person.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;

void Person::init(int health_f, int travel_radius_f, int contacts_f, bool mask_f, bool vaccin_f) {
	health = health_f;
	travel_radius = travel_radius_f;
	contacts = contacts_f;
	mask = mask_f;
	vaccination = vaccin_f;
}
