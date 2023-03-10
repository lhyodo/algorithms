#include <stdio.h>
#include <iostream>
#include <array>

int Partition(double *arr, int low, int high);
void QuickSort(double *arr, int low, int high);

int Partition(double *arr, int low, int high)
{
    int pivot = low;
    int item_from_left = low;
    int item_from_right = high;

    while (item_from_left <= item_from_right)
    {
        while (arr[item_from_left] <= arr[pivot])
        {
            ++item_from_left;
        }
        while (arr[item_from_right] > arr[pivot])
        {
            --item_from_right;
        }
        if (item_from_left < item_from_right)
        {
            double temp = arr[item_from_left];
            arr[item_from_left] = arr[item_from_right];
            arr[item_from_right] = temp;
            ++item_from_left;
            --item_from_right;
        }
    }
    // item_from_left has crossed item_from_right
    double temp = arr[pivot];
    arr[pivot] = arr[item_from_right];
    arr[item_from_right] = temp;

    return item_from_right; // returns the element that has found its definite position
}

void QuickSort(double *arr, int low, int high)
{
    if (low >= high) // base case
        return;      // there is only one element
    else
    {
        // recursive case
        int index = Partition(arr, low, high); // partition returns the element that has found its definite position
        QuickSort(arr, low, index - 1);        // sort the group that is less than arr[index]
        QuickSort(arr, index + 1, high);       // sort the group that is greater than arr[index]
    }
    return;
}

int main()
{
    double arr[]{5, 3, 8, 2, 1, 4, 6, 9, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // the number of elements

    std::cout << "this is the array: " << std::endl;
    for (auto i : arr)
    {
        std::cout << i << '\n';
    }

    QuickSort(arr, 0, n - 1);
    std::cout << "this is the sorted array: " << std::endl;
    for (auto i : arr)
    {
        std::cout << i << '\n';
    }

    return 0;
}