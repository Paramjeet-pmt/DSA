#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

void swap_MinMax_array(int arr[], int size)
{
    int max = 0, min = 0;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
            min = i;
        }
        if (largest < arr[i])
        {
            largest = arr[i];
            max = i;
        }
    }
    swap(arr[min], arr[max]);
}

int main()
{
    int arr[] = {13, 412, -13, 142, 4123523, 41, 54321};
    int size = sizeof(arr) / sizeof(int);

    swap_MinMax_array(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << '\n';

    cout << endl;

    return 0;
}