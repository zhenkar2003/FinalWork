#include <unistd.h>
#include <stdio.h>

int main()
{
    int a, b, c, swap, i;
    swap = 0;
  
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
    if (a == ((b + c)/2))
    {
       // printf ("%s true");
       write (1, "true\n", 5);
    }
    else if (b == ((a + c)/2))
    {
       // printf ("true");
        write (1, "true\n", 5);
    }
    else if (c == ((b + a)/2))
    {
       // printf ("true");
        write (1, "true\n", 5);
    }
    else
    {
       // printf ("%s false");
        write (1, "false\n", 6);
    }
return (0);
}