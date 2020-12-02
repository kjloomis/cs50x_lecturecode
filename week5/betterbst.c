#include <stdio.h>
#include <cs50.h>

/**
 * Represents a number in a binary search tree.
 */
typedef struct node
{
    int aNum;
    struct node *left;
    struct node *right;
}
node;

/**
 * Represents a BST of positive numbers.
 */
typedef struct bst
{
    node* root;
    int depth;
}
bst;

int add ( bst* numBST, int num );
int find ( bst numBST, int num );
int finder ( node* aNode, int num, int depth );
void spaces ( int cnt );
void printNode ( node* aNode, int depth );
void printBST ( bst numBST );

int main ( void )
{

    bst numBST;
    numBST.root = NULL;
    numBST.depth = 0;
    int aNum;
    char whiteSpace;

    printf ( "Enter numbers: " );
    do
    {
        scanf ( "%i%c", &aNum, &whiteSpace );
        int depth = add ( &numBST, aNum );
        if ( depth > numBST.depth )
        {
            numBST.depth = depth;
        }
    }
    while ( whiteSpace != '\n' );

    printf ( "Printing BST:\n" );
    printBST ( numBST );

    printf ( "Enter a number to search (-1 to quit): \n" );
    int findNum = get_int( );
    while ( findNum > 0 )
    {
        int loc = find ( numBST, findNum );
        if ( loc >= 0 )
        {
            printf ( "\t%i found at depth %i.\n", findNum, loc );
        }
        else
        {
            printf ( "\t%i not found.\n", findNum );
        }
        findNum = get_int( );
    }
    printf ( "\n" );
    return 0;

}

int add ( bst* numNST, int num )
{
    node* item = malloc ( sizeof ( node ) );

    item->aNum = num;
    item->left = NULL;
    item->right = NULL;

    int count = 1;

    if ( numNST->root == NULL )
    {
        numNST->root = item;
    }
    else
    {
        node* iter = numNST->root;
        bool added = false;
        while ( !added )
        {
            if ( iter->aNum > num )
            {
                if ( iter->left != NULL )
                {
                    iter = iter->left;
                    count++;
                }
                else
                {
                    iter->left = item;
                    added = true;
                }
            }
            else
            {
                if ( iter->right != NULL )
                {
                    iter = iter->right;
                    count++;
                }
                else
                {
                    iter->right = item;
                    added = true;
                }
            }
        }

    }
    return count;
}


int find ( bst numBST, int num )
{
    return finder ( numBST.root, num, 0 );
}

int finder ( node* aNode, int num, int depth )
{
    if ( aNode == NULL )
    {
        return -1;
    }
    else if ( aNode->aNum == num )
    {
        return depth;
    }
    else if ( aNode->aNum > num )
    {
        return finder ( aNode->left, num, depth+1 );
    }
    else // aNum < num
    {
        return finder ( aNode->right, num, depth+1 );
    }
    // Shouldn't ever reach this point
    return -1;
}

void printBST ( bst numBST )
{
    if ( numBST.depth > 20)
    {
        printf ( "The tree is too large to print.\n" );
    }
    else
    {
        printNode ( numBST.root, 0 );
    }
}

void printNode ( node* aNode, int depth )
{
    if ( aNode != NULL )
    {
        // Print the right half first so the
        // tree can be printed horizontally.
        printNode ( aNode->right, depth+1 );
        spaces ( depth * 5 );
        printf ( "%i <\n", aNode->aNum );
        printNode ( aNode->left, depth+1 );
    }
    else
    {
        spaces ( depth * 5 );
        printf ( "X\n" );
    }
}


void spaces ( int cnt )
{
    for ( int s=0; s<cnt; s++ )
    {
        printf ( " " );
    }
}
