#pragma once
#include "Calculator.h"
#include <string>
class Processor
{


public:
	static Processor* instance;
	Processor();
	//static Processor* getInstance();
	double Add( double* num1, double* num2);
	double Subtract(double* num1, double* num2);
	double Divide(double* num1, double* num2);
	double Multiply(double* num1, double* num2);
	/*float Concatenate(float* a, float* b);*/
	
};

