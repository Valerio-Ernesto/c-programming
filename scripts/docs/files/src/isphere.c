/* Takes the radius value provided by the user and calculates 
 * the volume of the corresponding sphere.*/

#include <stdio.h>

int main(void)
{
	float radius, pi, volume;

	pi = 3.141592f;

	printf("Enter the length of the radius of the sphere: ");
	scanf("%f", &radius);

	volume = (4.0f / 3.0f) * pi * radius * radius * radius;
	
	printf("The volume of the sphere of radius 10 is equal to %f cubic meters", volume);
	return 0;
}

