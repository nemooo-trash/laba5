#ifndef ExeptionFuncH
#define ExeptionFuncH

#include <iostream>

using namespace std;

struct MyStraight_1 {
	double A1;
	double B1;
	double C1;

	MyStraight_1(double pA1, double pB1, double pC1) :
		A1(pA1), B1(pB1), C1(pC1) {
	}
};

// собственный класс исключение наследник стандартного класса-исключения
class MyStraight_1_Exception : public invalid_argument {
	double A1;
	double B1;
	double C1;

public:

	MyStraight_1_Exception(double pA1, double pB1, double pC1, const string& s) :
		A1(pA1), B1(pB1), C1(pC1), invalid_argument(s) {
	}
};

#endif

#pragma once
