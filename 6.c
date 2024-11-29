#include <stdio.h>//6th question

int main()
{
    int n, i, j, count;
    printf("enter the n value\n");
    scanf("%d", &n);
    printf("The prime numbers upto %d are\n", n);

    for (i = 1; i <= n; i++)
    {
        count=0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf("%d  ", i);
    }
}