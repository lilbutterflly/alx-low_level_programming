#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Multiplies two numbers
  * @argc: Arguments count
  * @argv: Arguments vector
  * Return: The results, 1 an Error incase of error
  */
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;
	int results = 1;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		results = n1 * n2;
		printf("%d\n", results);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (results);
}
