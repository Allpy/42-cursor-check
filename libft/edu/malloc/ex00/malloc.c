#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int a[40];
	
	//malloc
	//free
	//
	int *ptr;

	ptr = malloc(42 * sizeof(int));

	ptr[0] = 10;
	ptr[1] = 400;

	printf("%d %d\n", ptr[0], ptr[1]);

	free(ptr);

	printf("%d %d", ptr[0], ptr[1]);
	return (0);

}
