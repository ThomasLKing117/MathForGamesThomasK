#pragma once
#include <cmath>

class Vector3
{
private:

	float xPos;
	float yPos;
	float zPos;

public:

	Vector3();
	Vector3(float x, float y, float z);

	float getX();
	float getY();
	float getZ();

	Vector3 operator + (Vector3& rhs);
	Vector3 operator - (Vector3& rhs);

	Vector3 operator * (float& rhs);

	bool operator == (Vector3& rhs);
	bool operator != (Vector3& rhs);

	float magnitude();

	Vector3 normalize();

};