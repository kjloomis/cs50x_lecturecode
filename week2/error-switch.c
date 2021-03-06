#include <stdio.h>
#include <cs50.h>

/**
 * error-switch.c
 *
 * This program contains an error which prevents it from being
 * a correct solution. Correct the errors so that it correctly
 * performs the task below.
 *
 * Accepts user input in the form of an integer and outputs a
 * message that describes whether the input was an even number
 * or an odd number.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */
int main ( )
{
	int num = get_int( );
	switch ( num % 2 )
	{
		case 0:
			printf ( "%i is even.\n", num );
		case 1:
			printf ( "%i is odd.\n", num );
	}
	return 0;
}
