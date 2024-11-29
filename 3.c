//3rd question
#include <stdio.h>

int main()
{
    int a, n, i;
    printf("Enter the table number which need to be printed\n");
    scanf("%d", &a);
    printf("enter number of terms to be printed\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d*%d=%d\n", a, i, a * i);
    }
    return 0;
}