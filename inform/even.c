#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    if (a%2 != 0 && b%2 == 1 && c%2 != 0)
        printf ("2");
    else
        printf("1");
return (0);
}