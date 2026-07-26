/**
 * @file reverse.c
 * @brief Reverses the digits of a two-digit number.
 *
 * This program prompts the user to enter a two-digit integer and
 * prints the number with its digits reversed.
 *
 * Example: 
 * @code
 * Enter a two-digit number: 28
 * The reversal is: 82
 * @endcode
 */

#include <stdio.h>

/**
 * @brief Program entry point.
 *
 * Prompts the user for a two-digit integer, extracts its digits using
 * the modulus (%) and integer division (/) operators, and prints the 
 * digits in reverse order.
 *
 * @return Returns 0 if the program terminates successfully.
 */
int main(void)
{
	/* Stores the original number entered by the user. */
	int number;

	/* Stores the units digit of the number. */
	int firstDigit; 

	/* Stores the tens digit of the number */
	int secondDigit;

	printf("Enter a two-digit number: ");
	scanf("%d", &number);
	
  /* Extract the units digit. */
  firstDigit = number % 10;

	/* Extract the tens digit. */
	secondDigit = number / 10;

	printf("The reversal is: %d%d", firstDigit, secondDigit);

	return 0;
}

