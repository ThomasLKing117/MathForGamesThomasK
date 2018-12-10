#include "Vector2.h"
#include "Vector3.h"

int main()
{
	Vector3 V1(5, 5, 5);
	Vector3 V2(3, 6, 9);

	V1.getX();
	V1.getY();
	V1.getZ();

	V2.getX();
	V2.getY();
	V2.getZ();

	Vector3 V3(V1 + V2);

	Vector3 V4(V1 - V2);

	float dfsf = 3.0f;

	Vector3 V5 = V1 * dfsf;

	V1 == V2;

	V3 != V4;

	return 0;
}