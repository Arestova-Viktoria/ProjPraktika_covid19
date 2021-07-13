#include "PeopleList.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Threading;

void PeopleList::work_init(array<int^, 2>^ text_buttons) {

	int n = 0;
	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			Person^ pers = gcnew Person();
			pers->id = n;
			n++;
			
			//проверка
			if (pers->id == 22)
				text_buttons[i, j] = 1;
			else
				text_buttons[i, j] = 0;
		}
	}



}
