#ifndef MAGNETICFIELD_H
#define MAGNETICFIELD_H
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include "field.h"

class magneticfield : public field {
public:
	magneticfield() : field() {}
	magneticfield(double val) : field(val) {}
	void calculatemagneticfield(double mu0, double I, double r) {
		if (r != 0) {
			double B = (mu0 * I) / (2.0 * M_PI * r);
			setvalue(B);
		} else {
			setvalue(0.0);
		}
	}
	
	void printmagnitude() const {
		std::cout << "magnetic field mgnitude: " << getvalue() << " (tesla)" << std::endl;
	}

	magneticfield operator+(const magneticfield &other) const {
		magneticfield result;
		result.setvalue(this->getvalue() + other.getvalue());
		return result;
    }

	friend std::ostream& operator<<(std::ostream &out, const magneticfield &mf) {
		out << "magnetic field magnitude: " << mf.getvalue();
		return out;
	}
};

#endif
