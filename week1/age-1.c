#include <stdio.h>
#include <cs50.h>

/**
 * age-1.c
 *
 * Produces a message based upon the age entered
 * by the user. This version uses a single selection
 * statement to perform the task.
 *
 * What is the advantage of using such a such
 * a design?
 *
 * What problems may still occur with this solution?
 *
 * @author Ken Loomis
 */
int main ( void )
{
    int age = get_int ( "Enter your age: " );

    if ( age <= 1 )
    {
        printf("infant\n");
    }
    else if ( age > 1 && age < 4 )
    {
        printf ("toddler\n");
    }
    else if (age >= 4 && age < 13 )
    {
        printf ("child\n");
    }
    else if (age >= 13 && age < 18 )
    {
        printf ("teenager\n");
    }
    else if (age >= 18 && age < 64)
    {
        printf ("adult\n");
    }
    else if ( age >= 65 )
    {
        printf ( "senior\n" );
    }

    return 0;
}
