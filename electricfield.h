
#ifndef ELECTRICFIELD_H
#define ELECTRICFIELD_H

#include "field.h"

class electricfield : public field {
public: 
	electricfield() : field() {}
	electricfield(double val) : field(val) {}
	void calculateelectricfield(double Q, double epsilon0, double A) {
		if (epsilon0 != 0 && A != 0) {
			double E = Q / (epsilon0 * A);
			setvalue(E);
		} else {
			setvalue(0.0);
		}
	}
	
	void printmagnitude() const {
		std::cout << "electric field magnitude: " << getvalue() << " (V/m or N/C)" << std::endl;
	}

	electricfield operator+(const electricfield &other) const {
		electricfield result;
		result.setvalue(this->getvalue() + other.getvalue());
		return result;
	}
};

#endif
