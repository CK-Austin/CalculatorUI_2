#include "Processor.h"

Processor::Processor()
{
   
}

Processor* Processor::instance = nullptr;


 double Processor::Add(double* num1, double* num2)
 {
	 float val1 = *num1;
	 float val2 = *num2;
	 return (double)val1 + val2;
 }

 double Processor::Subtract(double* num1, double* num2)
 {
	float val1 = *num1;
	float val2 = *num2;
	 return (double)val1 - val2;
 }

 double Processor::Divide(double* num1, double* num2)
 {
	 float val1 = *num1;
	 float val2 = *num2;
	 return val1 / val2;
 }

 double Processor::Multiply(double* num1, double* num2)
 {
	 float val1 = *num1;
	 float val2 = *num2;
	 return (double)val1 * val2;
 }

 