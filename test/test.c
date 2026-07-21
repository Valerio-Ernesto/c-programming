/* Comment your code */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int i = 10;

	while (i > 0) {
		printf("T minus %d and counting\n", i);
		i -- ;
		sleep(1);
	}
	return 0;
}

