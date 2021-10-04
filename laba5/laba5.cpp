#pragma hdrstop

#include <tchar.h>
#include "Staight1.h"
#include "Staight2.h"

#pragma argsused
// функция расчёта
double FindD(MyStraight_1 straight1, MyStraight_2 straight2) throw(MyStraight_1_Exception, MyStraight_2_Exception) {

	if (isnan(straight1.A1)) throw MyStraight_1_Exception(straight1.A1, straight1.B1, straight1.C1, "A1 is NaN");
	if (isnan(straight1.B1)) throw MyStraight_1_Exception(straight1.A1, straight1.B1, straight1.C1, "B1 is NaN");
	if (isnan(straight1.C1)) throw MyStraight_1_Exception(straight1.A1, straight1.B1, straight1.C1, "C1 is NaN");

	if (isnan(straight2.A2)) throw MyStraight_1_Exception(straight2.A2, straight2.B2, straight2.C2, "A2 is NaN");
	if (isnan(straight2.B2)) throw MyStraight_1_Exception(straight2.A2, straight2.B2, straight2.C2, "B2 is NaN");
	if (isnan(straight2.C2)) throw MyStraight_1_Exception(straight2.A2, straight2.B2, straight2.C2, "C2 is NaN");


	return (straight1.A1 * straight2.B2 - straight2.A2 * straight1.B1);
}

//Главная функция
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	double A1 = NAN, A2 = NAN, B1 = NAN, B2 = NAN, C1 = NAN, C2 = NAN;
	cout << "Введите A1 для первой прямой = ";
	cin >> A1;
	cout << "Введите B1 для первой прямой = ";
	cin >> B1;
	cout << "Введите C1 для первой прямой = ";
	cin >> C1;


	cout << "Введите A2 для второй прямой = ";
	cin >> A2;
	cout << "Введите B2 для второй прямой = ";
	cin >> B2;
	cout << "Введите C2 для второй прямой = ";
	cin >> C2;

	MyStraight_1 staight(A1, B1, C1);
	MyStraight_2 staight2(A2, B2, C2);

	try {
		double D = FindD(staight, staight2);
		if (D != 0) {
			cout << "\nПрямые (A1x+B1y+C1=0) и (A2x+B2y+C2=0) - существуют";
		}
		else {
			cout << "\nПрямые - не существуют";
		}
		//cout << D << endl;
	}
	catch (MyStraight_1_Exception e) {
		cout << e.what() << endl;
	}
	return 0;
}

