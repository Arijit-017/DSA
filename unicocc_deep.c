#include <stdio.h>

int main()
{
    int n, i, j, count = 0, hold = 0;
    printf("enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the numbers in the array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (min < arr[i])
        {
            hold = i;
            break;
        }
    }
    for (i = hold; i < n; i++)
    {
        count = 0;
        for (j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                break;
            }
            else
            {
                count++;
            }
        }
        if (hold != count)
        {
            printf("true");
            break;
        }
        else
        {
            hold = count;
            i = j - 1;
        }
    }
    if (hold == count)
    {
        printf("false");
    }
    return 0;
}