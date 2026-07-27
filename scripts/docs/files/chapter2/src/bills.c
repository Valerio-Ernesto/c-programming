/**
 * @file bills.c
 * @brief Distribute a certain amount of money using
 * @brief appropriate dollar bills.
 *
 * This program receives a whole amount
 * of dollars and distributes it in 20,
 * 10, 5 and 1 dollar bills.
 *
 * Example:
 * @code {.sh}
 * Enter a dollar amount: 93
 *
 * $20 bills: 4
 * $10 bills: 1
 *  $5 bills: 0
 *  $1 bills: 3
 * @endcode
 */

#include <stdio.h>

/**
 * @brief Program entry point.
 *
 * Prompts the user to enter a whole-dollar amount. The program
 * computes the required number of $20, $10, $5, and $1 bills using
 * integer division.
 *
 * @return Returns a list containing the number of bills for each denomination
 * @return whose total value equals the amount entered by the user.
 */
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

