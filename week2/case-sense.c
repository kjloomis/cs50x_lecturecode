#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

/**
 * case-sense.c
 *
 * Collects text from the user. Then asks the user to select a
 * character which represents the desired case to convert to.
 * Produces the text with the desired case to the console.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */
int main ( void )
{

    string msg;
    char theCase;
    char letter;

    msg = get_string ( "Enter your text: " );
    theCase = get_char ( "Select (U)ppercase, (L)owercase, or (S)wapcase: " );
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