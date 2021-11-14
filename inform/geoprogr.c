#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Enter the 3rd number : ");
    scanf("%d",&c);
    printf("Enter the 4th number : ");
    scanf("%d",&d);
    if (b*c == a*d)
        printf ("TRUE");
    else if (a*b == d *c)
         printf ("TRUE");
    else if (a*c == b*d)
         printf ("TRUE");
    else
         printf ("FALSE");
    return (0);
}