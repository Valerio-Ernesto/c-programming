/* Comment your code */

#include <stdio.h>

int main(void)
{
	int no1, no2, no3, no4, no5, no6, no7, no8;
	int no9, no10, no11, no12, no13, no14, no15, no16;

	int row1, row2, row3, row4;
	int column1, column2, column3, column4;
	int diagonal1, diagonal2;

	printf("Enter the numbers from 1 to 16 in any order:\n");

	scanf(
			"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
			&no1, &no2, &no3, &no4, &no5, &no6, &no7, &no8, &no9,
			&no10, &no11, &no12, &no13, &no14, &no15, &no16
			);

	row1 = no1 + no2 + no3 + no4;
	row2 = no5 + no6 + no7 + no8;
	row3 = no9 + no10 + no11 + no12;
	row4 = no13 + no14 + no15 + no16;

	column1 = no1 + no5 + no9 + no13;
	column2 = no2 + no6 + no10 + no14;
	column3 = no3 + no7 + no11 + no15;
	column4 = no4 + no8 + no12 + no16;

	diagonal1 = no1 + no6 + no11 + no16;
	diagonal2 = no4 + no7 + no10 + no13;

	printf("\n%2d %2d %2d %2d\n", no1, no2, no3, no4);
	printf("%2d %2d %2d %2d\n", no5, no6, no7, no8);
	printf("%2d %2d %2d %2d\n", no9, no10, no11, no12);
	printf("%2d %2d %2d %2d\n", no13, no14, no15, no16);

	printf("\nRow sums: %d %d %d %d\n", row1, row2, row3, row4);
	printf("Column sums: %d %d %d %d\n", column1, column2, column3, column4);
	printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);

	return 0;
}

