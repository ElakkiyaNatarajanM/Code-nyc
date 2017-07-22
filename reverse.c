#include <stdio.h>
int main()
{
  int n, reverse number = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n%10;
        reverse number = reverse number*10 + remainder;
        n /= 10;
    }
    printf("Reverse number = %d", reverse number);
     return 0;
     }
  
