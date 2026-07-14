/* Computes the volume of a sphere with a 10-meter radius.*/

#include <stdio.h>

int main(void)
{
	float radius, pi, volume;

	radius = 10.0f;
	pi = 3.141592f;

	volume = (4.0f / 3.0f) * pi * radius * radius * radius;
	
	printf("The volume of the sphere of radius is equal to %f cubic meters", volume);
	return 0;
}

