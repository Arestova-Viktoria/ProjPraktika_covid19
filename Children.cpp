#include "Children.h"
#include "Person.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;

int Children::get_risk() {
	risk_child = 0;
	return risk_child;
}
bool Children::check_perenoch() {
	perenoch = false;
	return perenoch;

}