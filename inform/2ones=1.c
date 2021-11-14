#include <stdio.h>

int main()
{
    int a,b,c,i;
    i = 0;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    if (a == 1)
        i++;
    else
        i = 0;
    if (b == 1)
        i++;
    if (c == 1 )
        i++;
    if (i == 2)
        printf("%s true");
    else
        printf("%s false");
return (0);
}