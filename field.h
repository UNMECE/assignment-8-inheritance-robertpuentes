#ifndef FIELD_H
#define FIELD_H

#include <iostream>

class field {
private:
	double value;
public:
	field() : value(0.0) {}
	field(double val) : value(val) {}
	virtual ~field() {}
	void setvalue(double val) {
		 value = val;
	}
	
	double getvalue() const {
		return value;
	}
	
	virtual void printmagnitude() const = 0;
	friend std::ostream& operator<<(std::ostream &out, const field &f) {
		out << "field magnitude: " << f.getvalue();
		return out;
	}
};

#endif

