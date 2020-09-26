#include<stdio.h>
#include<cs50.h>

/**
 * filter.c
 *
 * Collects an array of integers from the user. Filters the arrays so
 * that it only contains numbers that are divisible by a given number.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */

#define CAPACITY 100

typedef struct
{
    int nums [ CAPACITY ];
    int count;
}
numberList;

void printList ( numberList list );
bool isDivisible ( int number, int divisor );
void filterList ( numberList *list, int divBy );

/**
 * Creates an array of integers based upon user input.
 * Filters the array so only numbers that are evenly
 * divisible by a given integer will remain.
 */
int main ( void )
{

    // Declare the list to be filtered here.
    numberList list;
    list.count = 0;

    printf ( "Provide a list of positive numbers (-1 to stop)...\n" );
    int num = get_int ( "\tEnter a number: " );
    while ( list.count < CAPACITY && num > 0 )
    {
        list.nums [ list.count++ ] = num;
        num = get_int ( "\tEnter a number: " );
    }

    printList ( list );
    num = get_int ( "Select a divisor to filter by: " );
    filterList ( &list, num );
    printList ( list );

    return 0;
}

/**
 * Outputs the contents of a numberList.
 * Author: Ken Loomis
 */
void printList ( numberList list )
{
    // Print the first element here.
    printf ( "List = { %i", list.nums [0] );

    // Loop through the rest of the elements to print
    // them one at a time.
    for ( int i = 1; i < list.count ; i++ )
    {
        // For every 10th element include a line break.
        if ( i %10 == 0 )
            printf ( ",\n\t%i", list.nums [i] );
        else
            printf ( ", %i", list.nums [i] );
    }
    printf ( " }\n" );
}

/**
 * Determines if the given number is evenly divisible
 * by the given divisor. Uses a recursive technique
 * to do so.
 */
bool isDivisible ( int number, int divisor )
{
    // TODO - Part II
    if ( number > 0 )
    {
        return isDivisible ( number - divisor, divisor );
    }
    else if ( number == 0 )
    {
        return true;
    }
    return false;
}

/**
 * Filters a given list such that any elements that are not
 * evenly divisible by integer divBy will be excluded from
 * the list.
 * Note: Requires the use of isDivisible
 */
void filterList ( numberList *list, int divBy )
{
    numberList tmp;
    tmp.count = 0;

    for ( int i=0; i<list->count; i++ )
    {
        if ( isDivisible ( list->nums[i], divBy ) )
        {
            tmp.nums [ tmp.count++ ] = list->nums [ i ];
        }
    }

    list->count = 0;
    for ( int i=0; i<tmp.count; i++ )
    {
        list->nums [ list->count++ ] = tmp.nums [ i ];
    }

    return;
}
