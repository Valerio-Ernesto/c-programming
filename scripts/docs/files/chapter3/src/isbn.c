/* Comment your code */

#include <stdio.h>

int main(void)
{
	int gsiPrefix, groupIdentifier, publisher, item, checkDigit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsiPrefix, &groupIdentifier, &publisher, &item, &checkDigit);

	printf("GSI prefix: %d\n", gsiPrefix);
	printf("Group identifier: %d\n", groupIdentifier);
	printf("Publisher code: %d\n", publisher);
	printf("Item number: %d\n", item);
	printf("Check digit: %d\n", checkDigit);
	
	return 0;
}

