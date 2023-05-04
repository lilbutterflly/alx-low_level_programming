#include "main.h"
/**
  * rot13 - Encodes a string using rot13
  * @str: String
  * Return: String
  */
char *rot13(char *str)
{
	int i, j;
	char data1[] = "ABCDEFJHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data1[j])
			{
				str[i] = datarot[j];
				break;
			}
		}
	}
	return (str);
}
