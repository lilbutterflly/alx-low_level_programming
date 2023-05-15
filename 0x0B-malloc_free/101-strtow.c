#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
  * word_len - locates the index marking the end of the
  *            first word contained withing a string.
  * @str: The string to be searched.
  *
  * Return: The index marking the end of the initial word pointed to by str
  */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
  * count_words - Counts the number of words contained within a string.
  * @str: The string to be searched.
  * Return: The number of words contained within str.
  */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
	{
		len++;
	}
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
  * strtow - Splits a string into two
  * @str: string
  * Return: Pointer
  */
char **strtow(char *str)
{
	char **string;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}
	string = malloc(sizeof(char *) * (words + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
		{
			index++;
		}
		letters = word_len(str + index);
		string[w] = malloc(sizeof(char) * (letters + 1));
		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);
			free(string);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			string[w][l] = str[index++];
		}
		string[w][l] = '\0';
	}
	string[w] = NULL;
	return (string);
}

