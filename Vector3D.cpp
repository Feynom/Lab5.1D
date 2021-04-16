#include "Vector3D.h"

Vector3D::Vector3D() : Triad(0, 0, 0) {}
Vector3D::Vector3D(double first, double second, double third) : Triad(first, second, third) {}
Vector3D::Vector3D(Vector3D& A) : Triad(A.GetFirst(), A.GetSecond(), A.GetThird()) {}

Vector3D& Vector3D::operator ++ ()
{
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}
Vector3D& Vector3D::operator -- ()
{
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}
Vector3D Vector3D::operator ++ (int)
{
	Vector3D t(*this);
	this->SetSecond(this->GetSecond() + 1);
	return t;
}
Vector3D Vector3D::operator -- (int)
{
	Vector3D t(*this);
	this->SetSecond(this->GetSecond() - 1);
	return t;
}

Vector3D operator +(Vector3D& A, Vector3D& B)
{
	Vector3D t(A.GetFirst() + B.GetFirst(), A.GetSecond() + B.GetSecond(), A.GetThird() + B.GetThird());
	return t;
}
Vector3D operator -(Vector3D& A, Vector3D& B)
{
	Vector3D t(A.GetFirst() - B.GetFirst(), A.GetSecond() - B.GetSecond(), A.GetThird() - B.GetThird());
	return t;
}
double operator * (Vector3D& A, Vector3D& B)
{
	Vector3D t2(A.GetFirst() * B.GetFirst(), A.GetSecond() * B.GetSecond(), A.GetThird() * B.GetThird());
	return t2.GetFirst() + t2.GetSecond() + t2.GetThird();
}