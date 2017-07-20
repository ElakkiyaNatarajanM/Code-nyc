#include <stdio.h>
int main()
{
    char e;
    printf("Enter a character: ");
    scanf("%c",&e);

    if( (e>='a' && e<='z') || (e>='A' && e<='Z'))
        printf("%c is an alphabet.",e);
    else
        printf("%c is not an alphabet.",e);

    return 0;
}
