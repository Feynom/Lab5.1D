#pragma once
#include "Triad.h"

class Vector3D :public Triad
{
public:
	Vector3D();
	Vector3D(double, double, double);
	Vector3D(Vector3D&);

	Vector3D& operator ++ ();
	Vector3D& operator -- ();
	Vector3D operator ++ (int);
	Vector3D operator -- (int);

	friend Vector3D operator + (Vector3D&, Vector3D&);
	friend Vector3D operator - (Vector3D&, Vector3D&);
	friend double operator * (Vector3D&, Vector3D&);
};

