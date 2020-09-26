#include <stdio.h>
#include <cs50.h>

/**
 * age-0.c
 *
 * Produces a message based upon the age entered
 * by the user. This version uses independent selection
 * statements to perform the task.
 *
 * What is the disadvantage of using such a such
 * a design?
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
    if ( age > 1 && age <= 4 )
    {
        printf ( "You are an toddler.\n" );
    }
    if ( age > 4 && age <= 12 )
    {
        printf ( "You are an child.\n" );
    }
    if ( age > 12 && age <= 18 )
    {
        printf ( "You are an teenager.\n" );
    }
    if ( age > 18 && age <= 65 )
    {
        printf ( "You are an adult.\n" );
    }
    if ( age > 65 )
    {
        printf ( "You are a senior.\n" );
    }
    return 0;
}