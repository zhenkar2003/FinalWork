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
    if (a != 1 && b != 1 && c != 1)
        printf ("FALSE");
    else
        printf("TRUE");
return (0);
}