// 7th question
#include <stdio.h>
#include <math.h> //imp dont forget to inculde math.h if we dont include square root function doesnt work viva lo adagochu guys

int main()
{
    int a, b, c, d, r1, r2;
    printf("Enter a,b and c values\n");
    scanf("%d%d%d", &a, &b, &c);
    d = (b * b - 4 * a * c) / 2 * a;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / 2 * a;
        r2 = (-b - sqrt(d)) / 2 * a;
        printf("The roots are real.\n");
        printf("Root1=%d,Root2=%d", r1, r2);
    }
    else if (d == 0)
    {
        r1 = r2 = -b / 2 * a;
        printf("The roots are equal\n");
        printf("Root1=%d,Root2=%d", r1, r2);
    }
    else
    {
        printf("The roots are imaginary\n");
    }

    return 0;
}