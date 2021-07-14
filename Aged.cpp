#include "Aged.h"
#include "Person.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;

int Aged::get_risk() {
	risk_aged = 100;
	return risk_aged;
}
bool Aged::check_sicks(int sick) {
	if (sick == 0)
		chronic_sicks = false;
	else
		chronic_sicks = true;
	return chronic_sicks;
}
