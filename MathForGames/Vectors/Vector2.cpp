#include "Vector2.h"
#include <cmath>

Vector2::Vector2()
{

}

Vector2::Vector2(float x, float y)
{
	xPos = x;
	yPos = y;
}

float Vector2::getX()
{
	return xPos;
}

float Vector2::getY()
{
	return yPos;
}

Vector2 Vector2::operator+(Vector2 & rhs)
{
	return Vector2(xPos + rhs.xPos, yPos + rhs.yPos);
}

Vector2 Vector2::operator-(Vector2 & rhs)
{
	return Vector2(xPos - rhs.xPos, yPos - rhs.yPos);
}

Vector2 Vector2::operator*(float & rhs)
{
	return Vector2(xPos * rhs, yPos * rhs);
}

bool Vector2::operator==(Vector2 & rhs)
{
	return this->xPos == rhs.xPos && this->yPos == rhs.yPos;
}

bool Vector2::operator!=(Vector2 & rhs)
{
	return this->xPos != rhs.xPos || this->yPos != rhs.yPos;
}

float Vector2::magnitude()
{
	float temp = (xPos * xPos) + (yPos * yPos);
	return sqrtf(temp);
}

Vector2 Vector2::normalize()
{
	return Vector2((xPos / magnitude()), (yPos / magnitude()));
}

float Vector2::distance(Vector2 other)
{
	return sqrtf(pow(xPos - other.xPos, 2) + pow(yPos - other.yPos, 2));
}