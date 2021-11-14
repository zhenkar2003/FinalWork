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
    if (a + b > c || b + c > a || c + a > b)
        printf("y=1");
    else
        printf("y=2");
return (0);
}