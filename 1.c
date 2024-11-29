// min max of 3 numbers
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter any three numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("max element is %d\n", a);
    }
    else if (c > a)
    {
        if (c > b)
            printf("max element is %d\n", c);
    }
    else
    {
        if (b > c)
            printf("max element is %d\n", b);
    }

    if (a < b)
    {
        if (a < c)
            printf("min element is %d\n", a);
    }
    else if (c > a)
    {
        if (c < b)
            printf("min element is %d\n", c);
    }
    else
    {
        if (b < c)
            printf("min element is %d\n", b);
    }

    return 0;
}