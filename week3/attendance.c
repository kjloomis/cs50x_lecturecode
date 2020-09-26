#include<stdio.h>
#include<cs50.h>
#include<string.h>

/**
 * attendance.c
 *
 * This program acts as an attendance roster. Students names may be
 * entered in the program as they enter the classroom. Then later
 * the names can be checked against a list of students that are
 * expected to be in attendance.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */

const int CAPACITY = 100;

int search ( string find, string array [], int size );

/**
 * Collects students names (up to 100 of them) from the user and stores
 * them in an array. Uses the array to search for students in the list to
 * see if they are in attendance.
 */
int main ( void )
{

    string names [ CAPACITY ];
    int active = 0;

    string name = get_string ( "Enter student name (\"done\" when done): " );
    while ( strcmp ( name, "done" ) != 0 && active <= CAPACITY )
    {
        names [ active ] = name;
        active++;

        name = get_string ( "Enter student name (\"done\" when done): " );
    }

    for ( int i = 0; i < active; i++ )
    {
        printf ( "%s\n", names [ i ] );
    }

    name = get_string ( "Search for... " );
    if ( search ( name, names, active ) >= 0 )
    {
        printf ( "I'm here!" );
    }

    return 0;
}

/**
 * Searches the array to see if the given student name is found.
 * Returns the index position of the name (find) if their is a
 * match, otherwise returns -1. Uses linear search.
 */
int search ( string find, string array [], int size )
{
    for ( int i = 0; i < size; i++ )
    {
        if ( strcmp ( array[i], find ) == 0 )
        {
            return i;
        }
    }
    return -1;
}