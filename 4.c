#include <stdio.h>  //4th question
#include <string.h>

int main()
{
    char str[50];
    printf("Enter the string to check itn is palindrome or not\n");
    scanf("%s", str);
    int i, x, length = strlen(str);
    for (i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            x = 1;
            break;
        }
    }

    if (x == 0)
        printf("Enetred string is palindrome");
    else
        printf("Entered string is not a palindrome");
}