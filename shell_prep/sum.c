#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av){

	int i;
	int sum = 0;

	printf("Argc = %d\n", ac);
	printf("Argv is av[]\n");

	for ( i = 1; i < ac; i++)
	{
		printf("argv[%d] = %s \n", i, av[i]);
		sum += atoi(av[i]);
	}
	printf("sum is %d\n", sum);
	return (0);
}
