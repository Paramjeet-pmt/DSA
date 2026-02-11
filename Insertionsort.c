#include <stdio.h>

int main()
{
    int n, i, j, k, m;
    int arr[50];

    printf("Enter the size of the array :");
    scanf("%d", &n);

    for (k = 0; k < n; k++)
    {
        printf("Enter the %dth element of the array :", k);
        scanf("%d", &arr[k]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = n; j < i; j++)
        {
            if (arr[j-1] > arr[j])
            {
                int temp = arr[j];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array :\n");
    for (m = 0; m < n; m++)
    {
        printf("%d  ", arr[m]);
    }
    return 0;
}