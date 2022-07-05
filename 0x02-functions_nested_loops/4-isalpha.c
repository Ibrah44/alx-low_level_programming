#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 * @k: Variable Input.
 *
 * Return: 1 if character letter and lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int k)
{

	if ((k >= 'a' && k <= 'z') ||
	    (k >= 'A' && k <= 'Z'))
		return (1);
	else
		return (0);
}
