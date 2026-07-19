/* Comment your code */

#include <stdio.h>

int main(void)
{
	int itemNo, day, month, year;
	float unitPrice;

	printf("Enter item number: ");
	scanf("%d", &itemNo);
	
	printf("Enter unit price: ");
	scanf("%f", &unitPrice);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("\nItem\tUnit\t\tPurchase\n");
	printf("\tPrice\t\tDate\n");
	printf(
			"%d\t$%7.2f\t%-2.2d/%-2.2d/%-4.4d", itemNo, unitPrice, month, day, year
			);
	return 0;
}

