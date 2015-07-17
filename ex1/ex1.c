/**
 * make ex1
 * cc ex1.c -o ex1
 *  or
 * CFLAGS="-Wall" make ex1
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	puts("Hello world.");
	puts("More that a 'hello world'.");
	puts("Trying some arguments (%d, %s).");
	puts("Just for completing 5 lines.");
	puts("End. :-)");

	return 0;
}