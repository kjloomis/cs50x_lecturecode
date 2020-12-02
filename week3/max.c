#include <stdio.h>

int main()
{
  int x;
  int max=0;
  int sum=0;
  for (int i =0; i<5; i++ ) {
    printf("Input an integer: ");
    scanf("%d", &x);  // %d is used for integer   // & is using the memory address in ram where that memory is located
    if ( x> max )
    {
      max=x;
    }
    sum= sum + x;

  }
    printf(" The maximun numbers is: %d\n", max);
  printf("The sum is: %d\n", sum );
  return 0;

}