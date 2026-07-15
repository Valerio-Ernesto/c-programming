/* This program asks the user to enter a value for x and then 
 * displays the value of the following polynomial.*/

#include <stdio.h>

int main(void)
{
  float i, result;	

	printf("Enter a real value: ");
	scanf("%f", &i);

	result = 3*i*i*i*i*i + 2*i*i*i*i -5*i*i*i -i*i +7*i - 6;
	printf("The value is: %g", result);

	return 0;
}

