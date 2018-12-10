#include "Vector2.h"

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