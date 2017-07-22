#include <stdio.h>
    void main()
    {
      int i,fact=1,a;
      printf("Enter the number \n");
      scanf("%d", &a);
      if (a<= 0)
           fact = 1;
           else
           {
             for (i=1;i<=a;i++)
             {
               fact=fact*i;
               }
                }
                printf("Factorialof%d=%5d\n",a,fact);

    }
