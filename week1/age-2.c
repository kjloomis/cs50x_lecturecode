#include <stdio.h>
#include <cs50.h>

/**
 * age-2.c
 *
 * Produces a message based upon the age entered
 * by the user. This version uses a single selection
 * statement to perform the task.
 *
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */
int main ( void )
{
    int age = get_int ( "Enter your age: " );

    if ( age > 0 && age <= 1 )
    {
        printf ( "You are an infant.\n" );
    }
    else if ( age <= 4 )
    {
        printf ( "You are an toddler.\n" );
    }
    else if ( age <= 12 )
    {
        printf ( "You are an child.\n" );
    }
    else if ( age <= 18 )
    {
        printf ( "You are an teenager.\n" );
    }
    else if ( age <= 65 )
    {
        printf ( "You are an adult.\n" );
    }
    else if ( age > 65 )
    {
        printf ( "You are a senior.\n" );
    }
    else
    {
        printf ( "ERROR: Invalid age.\n" );
    }
    return 0;
}