#include <stdio.h>

/*
* before_main - is a function executed before the main function.
* Description:
* This function is automatically executed before the main function*
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}

