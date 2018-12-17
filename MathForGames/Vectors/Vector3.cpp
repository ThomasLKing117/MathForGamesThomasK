#include "Vector3.h"
#include <cmath>

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

Vector3 Vector3::operator+=(Vector3 & other)
{
	return Vector3((xPos = xPos + other.xPos),(yPos = yPos + other.yPos),(zPos = zPos + other.zPos));
}

Vector3 Vector3::operator-=(Vector3 & other)
{
	return Vector3((xPos = xPos - other.xPos), (yPos = yPos - other.yPos), (zPos = zPos - other.zPos));
}

float Vector3::magnitude()
{
	float temp = (xPos * xPos) + (yPos * yPos) + (zPos * zPos);
	return sqrtf(temp);
}

Vector3 Vector3::normalize()
{
	return Vector3((xPos / magnitude()), (yPos / magnitude()), (zPos / magnitude()));
}

float Vector3::distance(Vector3 other)
{
	return sqrtf(pow(xPos - other.xPos, 2) + pow(yPos - other.yPos, 2) + pow(zPos - other.zPos, 2));
}

float Vector3::dotProduct(Vector3 rhs)
{
	return ((xPos * rhs.xPos) + (yPos * rhs.yPos) + (zPos * rhs.zPos));
}

Vector3 Vector3::crossProduct(Vector3 rhs)
{
	float x = ((yPos * rhs.zPos) - (zPos * rhs.yPos));
	float y = ((zPos * rhs.xPos) - (xPos * rhs.zPos));
	float z = ((xPos * rhs.yPos) - (yPos * rhs.xPos));
	return Vector3(x, y, z);
}
