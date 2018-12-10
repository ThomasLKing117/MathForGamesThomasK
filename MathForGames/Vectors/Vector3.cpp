#include "Vector3.h"

Vector3::Vector3()
{

}

Vector3::Vector3(float x, float y, float z)
{
	xPos = x;
	yPos = y;
	zPos = z;
}

float Vector3::getX()
{
	return xPos;
}

float Vector3::getY()
{
	return yPos;
}

float Vector3::getZ()
{
	return zPos;
}

Vector3 Vector3::operator+(Vector3 & rhs)
{
	return Vector3(xPos + rhs.xPos, yPos + rhs.yPos, zPos + rhs.zPos);
}

Vector3 Vector3::operator-(Vector3 & rhs)
{
	return Vector3(xPos - rhs.xPos, yPos - rhs.yPos, zPos - rhs.zPos);
}

Vector3 Vector3::operator*(float & rhs)
{

	return Vector3(xPos * rhs, yPos * rhs, zPos * rhs);
}

bool Vector3::operator==(Vector3 & rhs)
{
	return this->xPos == rhs.xPos && this->yPos == rhs.yPos && this->zPos == rhs.zPos;
}

bool Vector3::operator!=(Vector3 & rhs)
{
	return this->xPos != rhs.xPos || this->yPos != rhs.yPos || this->zPos != rhs.zPos;
}