#include <iostream>
#include "electricfield.h"
#include "magneticfield.h"

int main() {
	const double epsilon0 = 8.854e-12;
	const double mu0 = 4.0e-7 * 3.14159;
	double q = 1.0e-6;
	double a = 0.01; 
	double i = 5.0;
	double r = 0.02;
	
	electricfield e1, e2;
	e1.calculateelectricfield(q, epsilon0, a);
	e2.calculateelectricfield(q * 2.0, epsilon0, a * 2.0);

	e1.printmagnitude();
	e2.printmagnitude();
	
	electricfield e3 = e1 + e2;
	e3.printmagnitude();

	std::cout << e1 << std::endl;
	std::cout << e2 << std::endl;
	std::cout << e3 << std::endl;
	
	magneticfield m1, m2;
	m1.calculatemagneticfield(mu0, i, r);
	m2.calculatemagneticfield(mu0, i * 2.0, r * 2.0);
	
	m1.printmagnitude();
	m2.printmagnitude();

        magneticfield m3 = m1 + m2;
        m3.printmagnitude();
	
	std::cout << m1 << std::endl;
	std::cout << m2 << std::endl;
	std::cout << m3 << std::endl;
   
	return 0;
}
