#include <stdio.h>

/**
 * Start_phrase - start the phrase before the main
 *
 * Return: void
 */
void Start_phrase(void) __attribute__ ((constructor));

void Start_phrase(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
