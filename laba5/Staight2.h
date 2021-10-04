#ifndef ExeptionFuncH2
#define ExeptionFuncH2

#include <iostream>

using namespace std;

struct MyStraight_2 {
	double A2;
	double B2;
	double C2;

	MyStraight_2(double pA2, double pB2, double pC2) :
		A2(pA2), B2(pB2), C2(pC2) {
	}
};

// собственный класс исключение наследник стандартного класса-исключения
class MyStraight_2_Exception : public invalid_argument {
	double A2;
	double B2;
	double C2;

public:

	MyStraight_2_Exception(double pA2, double pB2, double pC2, const string& s) :
		A2(pA2), B2(pB2), C2(pC2), invalid_argument(s) {
	}
};

#endif

#pragma once
