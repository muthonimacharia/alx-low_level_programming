#include "lists.h"
/**
 * my_constructor - is a function that prints:
 * "You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n"
 * before the main function is executed.
 */

void __attribute__ ((constructor)) my_constructor()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
