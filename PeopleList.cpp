#include "PeopleList.h"
#include "Children.h"
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

	//int n = 0;
	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			//Person^ pers = gcnew Person();
			//pers->id = n;
			//n++;


			//проверка
			/*if (pers->id <= 35)
				text_buttons[i, j] = 1;
			else
				text_buttons[i, j] = 0;
			*/
		}
	}

	int proc_det, proc_vzr, proc_pojil;

	proc_det = 442 * 17 / 100; //процент детей
	proc_vzr = 442 * 68 / 100; //процент взрослых
	proc_pojil = 442 * 15 / 100; //процент пожилых на поле

	int rand_change;
	int mas_change[21][21];

	srand(time(NULL));
	for (int i = 0; i < 21; i++)
		for (int j = 0; j < 21; j++){
			
			rand_change = 1 + rand() % 3;
			
			mas_change[i][j] = rand_change;
		}
	

	//распределяем id людей по спирали (от краев к центру)
	int const n = 21;
	int A[21][21];
	int i = 1, j, k, p = n / 2;
	for (k = 1; k <= p; k++)/*Цикл по номеру витка*/
	{
		for (j = k - 1; j < n - k + 1; j++) 
			A[k - 1][j] = i++;/*Определение значений верхнего гор столбца*/
		for (j = k; j < n - k + 1; j++) 
			A[j][n - k] = i++;/* --//-- По правому вертикальному столбцу*/
		for (j = n - k - 1; j >= k - 1; --j) 
			A[n - k][j] = i++;/* --//-- по нижнему горизонтальному столбцу*/
		for (j = n - k - 1; j >= k; j--) 
			A[j][k - 1] = i++;/* --//-- по левому вертикальному столбцу*/
	}
	if (n % 2 == 1) A[p][p] = n * n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{	
			//if (mas_change[i][j] == 2) {
				Person^ pers = gcnew Person();
				pers->id = A[i][j];
				if (mas_change[i][j] == 1) 
					text_buttons[i, j] = 1;




				//проверка
			/*	if (pers->id <= 440) //440 все кроме центральной
					text_buttons[i, j] = 1;

				else
					text_buttons[i, j] = 0;*/
			//}
		}
	
	//for (i = 0; i < n; i++)
		//for (j = 0; j < n; j++)


}
