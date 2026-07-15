/* This program receives a whole amount
 * of dollars and distributes it in 20,
 * 10, 5 and 1 dollar bills.*/

#include <stdio.h>

int main(void)
{
	int amount, twenties, tens, fives, ones;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	twenties = amount / 20;
	printf("$20 bills: %d\n", twenties);

	amount = amount - twenties*20;

	tens = amount / 10;
	printf("$10 bills: %d\n", tens);

	amount = amount - tens*10;

	fives = amount / 5;
	printf(" $5 bills: %d\n", fives);

	amount = amount - fives*5;

	ones = amount;
	printf(" $1 bills: %d", ones);

	return 0;
}

