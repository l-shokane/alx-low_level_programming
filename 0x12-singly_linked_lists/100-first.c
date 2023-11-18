#include "lists.h"
void BeforeMain(void) __attribute__((constructor));
/**
 * BeforeMain - function that runs before the main function
 */
void BeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
