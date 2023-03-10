#include <stdio.h>
#include <iostream>
#include <array>

void BubbleSort(double *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            
            if (arr[j] > arr[j + 1])
            {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }
}

int main()
{
    double arr[]{5, 1, 4, 2, 8, 3, 7, 6, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // the number of elements

    std::cout << "this is the array: " << std::endl;
    for (auto i : arr)
    {
        std::cout << i << '\n';
    }

    BubbleSort(arr, 10);

    std::cout << "this is the sorted array: " << std::endl;
    for (auto i : arr)
    {
        std::cout << i << '\n';
    }

    return 0;
}