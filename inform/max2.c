#include <stdio.h>

int main()
{
    int a, b, c, max, i;
    max = 0;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
         if (a >= b && a >= c)
            max = a;
        else if (b >= a && b >= c)
            max = b;
        else if (c >= a && c >= b)
            max = c;
    printf("%d", max);
    return (0);
}