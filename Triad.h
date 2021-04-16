#pragma once
#include <iostream>
#include <sstream>

#include "MyException.h"

using namespace std;

class Triad
{
private:
	double first, second, third;
public:
	void SetFirst(double);
	void SetSecond(double);
	void SetThird(double);

	double GetFirst() const;
	double GetSecond() const;
	double GetThird() const;

	Triad();
	Triad(double, double, double) throw(invalid_argument, bad_exception, MyException, const char*);
	Triad(Triad&);

	friend bool operator > (Triad&, Triad&);
	friend bool operator < (Triad&, Triad&);
	friend bool operator == (Triad&, Triad&);

	operator string() const;
	friend ostream& operator << (ostream&, const Triad&);
	friend istream& operator >> (istream&, Triad&);
};

