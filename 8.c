#include <stdio.h> //8th question

int main()
{
    int arr[5] = {65, 93, 73, 92, 88};
    int i, max = arr[0], min = arr[0], sum = 0;
    for (i = 0; i < 5; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
        sum = sum + arr[i]; //to calculate average
    }
    printf("The maximum element in the array is %d\n", max);
    printf("The minimum element in the array is %d\n", min);
    printf("The average of elements in the array is %d",sum / 5);

    return 0;
}