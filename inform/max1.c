 #include <stdio.h>

int main()
{
    int a, b, c, swap, i;
    swap = 0;
    a = 0;
    b = 0;
    c = 0;
    i = 0;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    while (i < 3)
    {
    if (a > b)
    {
        swap = a;
        a = b;
        b = swap;
    }
    if (b > c)
    {
        swap = c;
        c = b;
        b = swap;
    }
    if (a > c)
    {
        swap = a;
        a = c;
        c = swap;
    }
    i++;
    }
    printf ("%d", c);
    return 0;
}