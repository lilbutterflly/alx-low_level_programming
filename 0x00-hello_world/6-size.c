#include <stdio.h>
/**
  *main - entry point 
  *Return: Always 0 (Success)
  */
int main(void)
{
	printf("Size of char: %c  byte(s)", sizeof(char));
	printf("Size of int: %d  byte(s)", sizeof(int));
	printf("Size of long int: %ld  byte(s)", sizeof(long int));
	printf("Size of long long int: %lld  byte(s)", sizeof(long long int));
	printf("Size of float: %f  byte(s)", sizeof(float));
	return (0);
}
