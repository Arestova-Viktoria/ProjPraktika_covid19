#include "Adult.h"
#include "Person.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;

int Adult::get_risk() {
	risk_adult = 100;
	return risk_adult;
}
bool Adult::bolnichnie() {
	sick_leave = true;
	return sick_leave;
}
