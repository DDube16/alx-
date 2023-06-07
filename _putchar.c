#include "main.h"
#include <unistd>
/**
 * _putchar - writes char e to stdout
 * @e: This character prints
 *
 * Return: Success 1
 * On error -1 returns and errno is set appropriately.
 */
int _putchar(char e)
{
	return(write(1,&e,1));
}
