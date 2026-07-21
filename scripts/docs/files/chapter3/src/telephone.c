/* This program prompts the uset to enter a telephone number in the
 * form (xxx)xxx-xxxx and then displays the number in the form
 * xxx.xxxx.xxx*/

#include <stdio.h>

int main(void)
{
	int section1, section2, section3;

	printf("Enter phone number [ (xxx) xxx-xxxx ]: ");
	scanf("(%d) %d-%d", &section1, &section2, &section3);

	printf("You entered %3.3d.%3.3d.%4.4d", section1, section2, section3);

	return 0;
}

