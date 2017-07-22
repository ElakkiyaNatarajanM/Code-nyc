#include <stdio.h>
int main()
{
int n,reverse num=0,remainder;
printf("Enter an integer: ");
scanf("%d", &n);
while(n != 0)
{
remainder=n%10;
reverse num=reverse num*10+remainder;
n /= 10;
}
printf("Reverse num=%d",reverse num);
return 0;
}
