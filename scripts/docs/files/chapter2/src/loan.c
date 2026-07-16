/* This program calculates the remaining balance on a loan after
 * the first, second, and third monthly payments.*/

#include <stdio.h>

int main(void)
{
	float loan, interest, monthPayment, firstPay, secondPay, thirdPay;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &interest);

	printf("Enter monthly payment: ");
	scanf("%f", &monthPayment);

	interest = interest * 0.01f;

	firstPay = loan * (1 + interest /12) - monthPayment;
	printf("Balance remaining after first payment: $%.2f\n", firstPay);

	secondPay = firstPay * (1 + interest /12) - monthPayment;
	printf("Balance remaining after second payment: $%.2f\n", secondPay);

	thirdPay = secondPay * (1 + interest/12) - monthPayment;
	printf("Balance remaining after third payment: $%.2f\n", thirdPay);
	
	return 0;
}

