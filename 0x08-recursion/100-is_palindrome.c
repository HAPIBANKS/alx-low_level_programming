#include "main.h"
/**
*is_palindrome - main entry
*@s: string
*Return: return something
*/
int is_palindrome(char *s)
{
	if (*s == '\0' || *(s + 1) != '\0')
	{
		return (1);
	}
	else if (*s != *(s + 1))
	{
		return (0);
	}
	else
	{
		return (is_palindrome(s + 1));
	}
}
