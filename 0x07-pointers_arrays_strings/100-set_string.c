#include "main.h"

/**
* set_string - sets the value of a pointer to another pointer
* @s: double pointer to another pointer
* @to: pointer value of another pointer
*/
void set_string(char **s, char *to)
{
	*s = to;
}
