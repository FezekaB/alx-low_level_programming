#include "main.h"
#include <stdio.h>

/**
 * _strpy - Copies at most an inputted number
 * of bytes from string src into dest
 * @dest: The buffer storing the string copy.
 * @src: The source strin.
 * @n: The maximum number of bytes to be copied from src.
 * Return: A pointer to the resulting string dest.
 *
 */

char *_strcpy(char *dest, char *src, int n)

{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
