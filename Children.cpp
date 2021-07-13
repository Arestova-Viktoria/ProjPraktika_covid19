#include "Children.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;

int Children::get_risk() {
	return risk_child;
}
int Children::check_perenoch() {
	perenoch = 0;
	return perenoch;
}