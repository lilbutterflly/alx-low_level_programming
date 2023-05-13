#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - Adds two positive number
  * @argc: Arguments count
  * @argv: Arguments vector
  * Return: 0 if there's no arguments passed, Error incase of error
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, res = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];
			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(e);
			e++;
		}
		printf("%d\n", res);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
