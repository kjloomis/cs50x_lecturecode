#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

/**
 * case-sense-cla.c
 *
 * Collects 2 command line argument: the text and a
 * character which represents the desired case to convert to.
 * Produces the text with the desired case to the console.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */
int main ( int argc, string argv[ ] )
{

    if ( argc != 3 || strlen(argv[ 1 ]) != 2 || argv[ 1 ][ 0 ] != '-' )
	{
		printf ( "Usage: ./case-sense-cla -case msg\n" );
        return 1;
    }
    else if ( argv[ 1 ][ 1 ] != 'U' && argv[ 1 ][ 1 ] != 'L'
        && argv[ 1 ][ 1 ] != 'S' )
    {
        printf ( "Invalid case selection. Options are -U, -L, or -S\n" );
        return 1;
    }
    string msg = argv[ 2 ];
    char theCase = argv[ 1 ][ 1 ];

    char letter;

    int len = strlen ( msg );
    for ( int i = 0; i < len; i++ )
    {
        letter = msg[ i ];
        if ( theCase == 'U' )
        {
            printf ( "%c", toupper ( letter ) );
        }
        else if ( theCase == 'L' )
        {
            printf ( "%c", tolower ( letter ) );
        }
        else
        {
            if ( isupper ( letter ) )
            {
                printf ( "%c", tolower ( letter ) );
            }
            else if ( islower ( letter ) )
            {
                printf ( "%c", toupper ( letter ) );
            }
            else
            {
                printf ( "%c", letter );
            }
        }
    }
    printf ( "\n" );

    return 0;
}