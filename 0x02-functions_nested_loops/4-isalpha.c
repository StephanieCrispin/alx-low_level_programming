#include "main.h"

/**
* _isalpha -> checks if the character is alphabet
*
*@c: a character argument
*
*Return: return 0 or 1 depending on the condition
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
