#include "Vector2.h"
#include "Vector3.h"

int main()
{
	//Vector2 Examples
	{
		Vector2 V1(5, 5);
		Vector2 V2(3, 6);

		V1.getX();
		V1.getY();

		V2.getX();
		V2.getY();

		Vector2 V3(V1 + V2);

		Vector2 V4(V1 - V2);

		float dfsf = 3.0f;

		Vector2 V5 = V1 * dfsf;

		V1 == V2;

		V3 != V4;

		V1.magnitude();
		V1.normalize();

		V2.magnitude();
		V2.normalize();

		V2.distance(V1);

		Vector2 V6(5, 5);

		V1 == V6;

		V1.dotProduct(V2);
	}

	//Vector3 Examples
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

		V1.magnitude();
		V1.normalize();

		V2.magnitude();
		V2.normalize();

		V2.distance(V1);

		Vector3 V6(5, 5, 5);

		V1 == V6;

		V1.dotProduct(V2);

		V1.crossProduct(V2);
	}

	return 0;
}