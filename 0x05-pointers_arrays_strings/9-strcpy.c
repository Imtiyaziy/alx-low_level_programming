#include "main.h"

/**
 *char*_strcpy - a function that copies the string pointed to by src
 *@dest: copy to
 *@src: copy from
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int l = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}
	for (; l < n; l++)
	{
		dest[l] = src[l];
	}
	dest[n] = '\0';
	return (dest);
}

