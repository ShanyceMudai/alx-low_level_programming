#include <stdio.h>
void firstCome(void)__attribute__ ((constructor));
/**
 * firstCome - prints before the main
 *
 * no return
 *
 */
void firstCome(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
