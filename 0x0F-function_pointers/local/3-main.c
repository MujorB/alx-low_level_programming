#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program entry point
 * @argc: argument counter
 * @argv: argument vector array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*func_ptr)(int, int);
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 =  atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func_ptr = get_op_func(operator);

	printf("%d\n", func_ptr(num1, num2));

	return (0);
}
