#include <stdio.h>
#include <cs50.h>

/**
 * duplicate-for.c
 *
 * Produces a single character duplicated as output
 * for the number of times given by the user.
 *
 * Why is a count-controlled (for) loop appropriate for
 * this solution?
 *
 * @author Ken Loomis
 */
int main ( void )
{
    char character = get_char ( "Enter a character: " );
    int dups = get_int ( "Enter the number of duplicates: " );

    for ( int iter=0; iter<dups; iter++ )
    {
        printf ( "%c", character );
    }
    printf ( "\n" );

    return 0;
}