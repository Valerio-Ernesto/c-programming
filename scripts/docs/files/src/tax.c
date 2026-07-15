/* This program asks the user to enter a dollars-and-cents 
 * amount, then displays the amount with 5% tax added.*/

#include <stdio.h>

int main(void)
{
	float amount, total;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	total = amount * 1.05f;

	printf("With tax added: %.2f", total);
	return 0;
}

