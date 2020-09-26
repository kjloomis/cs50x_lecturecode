#include <stdio.h>
#include <cs50.h>

/**
 * duplicate-while.c
 *
 * Produces a single character duplicated as output
 * for the number of times given by the user.
 *
 * Is this type of loop the best one to use for
 * this solution?
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */
int main ( void )
{
    char character = get_char ( "Enter a character: " );
    int dups = get_int ( "Enter the number of duplicates: " );

    int iter=0;                         // Initialize loop-control variable
    while ( iter<dups )                 // Check condition
    {
        printf ( "%c", character );     // Do the work
        iter++;                         //Update loop-control variable
    }
    printf ( "\n" );

    return 0;
}