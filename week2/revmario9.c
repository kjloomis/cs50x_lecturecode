#include <stdio.h>
#include <cs50.h>

/**
 * revmario.c
 *
 * This program creates a 1/2 pyramid based on the height given
 * by the user. Please note: this is not a solution to mario.c
 * from CS50/CS50x pset1. However, there are similarities
 * between the two programs.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */

/**
 * Create a 1/2 pyramid of given height.
 *
 * This is a function stub. The full function
 * definition appears below main.
 */
void makePyramid ( int height );

/**
 * Create a 1/2 pyramid of height given by user.
 */
int main ( void )
{
    int height = get_int ( "Height: " );
    makePyramid ( height );
    return 0;
}

/**
 * Create a 1/2 pyramid of given height.
 *
 * This is a function definition. It implements
 * the function stub given at the top of the program.
 */
void makePyramid ( int height )
{
    for ( int rows=1; rows<=height; rows++ )
    {
        for ( int hashes=1; hashes<=rows+1; hashes++ )
        {
            printf ( "#" );
        }
        printf ( "\n" );

    }
}