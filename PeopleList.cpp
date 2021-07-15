#include "PeopleList.h"
#include "Children.h"
#include "Person.h"
#include "Adult.h"
#include "Aged.h"
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


			//��������
			/*if (pers->id <= 35)
				text_buttons[i, j] = 1;
			else
				text_buttons[i, j] = 0;
			*/
		}
	}

	int proc_det, proc_vzr, proc_pojil;

	proc_det = 75;
	proc_vzr = 301;
	proc_pojil = 66;
	//proc_det = 442 * 17 / 100; //������� ����� 75
	//proc_vzr = 442 * 68 / 100; //������� �������� 301
	//proc_pojil = 442 * 15 / 100; //������� ������� �� ���� 66


	int rand_change;
	int mas_change[40][40];
	int posech[21][21];

	for (int i = 0; i < 21; i++)
		for (int j = 0; j < 21; j++)
			posech[i][j] = 0;

	srand(time(NULL));
	
	
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			rand_change = 1 + rand() % 100;
			mas_change[i][j] = rand_change;
		}
	}
		

	
			
		
	

	//������������ id ����� �� ������� (�� ����� � ������)
	int const n = 21;
	int A[21][21];
	int i = 1, j, k, p = n / 2;
	for (k = 1; k <= p; k++)/*���� �� ������ �����*/
	{
		for (j = k - 1; j < n - k + 1; j++) 
			A[k - 1][j] = i++;/*����������� �������� �������� ��� �������*/
		for (j = k; j < n - k + 1; j++) 
			A[j][n - k] = i++;/* --//-- �� ������� ������������� �������*/
		for (j = n - k - 1; j >= k - 1; --j) 
			A[n - k][j] = i++;/* --//-- �� ������� ��������������� �������*/
		for (j = n - k - 1; j >= k; j--) 
			A[j][k - 1] = i++;/* --//-- �� ������ ������������� �������*/
	}
	if (n % 2 == 1) A[p][p] = n * n;
	
	//����������� id ���������� �����, �������� ����������� ��������� �� ���
	int kol_1 = 0, kol_2 = 0, kol_3 = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
		{


			if (posech[i][j] == 0) {
				//��������
				if (mas_change[i][j] == 1 || mas_change[i][j] <= 68) { //������������� �� �������� �� 1, 2, 3
					Adult^ ad = gcnew Adult();

					ad->id = A[i][j];
					posech[i][j] = 1;
					text_buttons[i, j] = 2;
					kol_2 += 1;


					//if (ad->get_risk() == 0)
					

				}

				//����
				if (mas_change[i][j] > 83 && mas_change[i][j] <= 100) { //������������� �� �������� �� 1, 2, 3
					Children^ child = gcnew Children();

					child->id = A[i][j];
					posech[i][j] = 1;
					text_buttons[i, j] = 1;
					kol_1 += 1;

					//if (child->get_risk() == 0)



				}

				//������� ����
				if (mas_change[i][j] > 68 && mas_change[i][j] <=83) { //������������� �� �������� �� 1, 2, 3
					Aged^ ag = gcnew Aged();

					ag->id = A[i][j];
					posech[i][j] = 1;
					text_buttons[i, j] = 3;
					kol_3 += 1;

					//if (ag->get_risk() == 0)


				}

			}
		}
	}



}
