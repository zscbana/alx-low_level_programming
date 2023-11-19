#include <stdio.h>

void __attribute__((constructor)) tortoise_and_hare_race(void);

/**
 * tortoise_and_hare_race - Function executed before main
 */
void tortoise_and_hare_race(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
