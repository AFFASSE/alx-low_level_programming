#include "main.h"

/**
 * char *_strcpy - a function that copies the sting pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return sting
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0;
	int x = 0;

	while (*(src + 1) i = '\0')
	{
		i++
	}
	for ( ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
