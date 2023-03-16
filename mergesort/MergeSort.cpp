#include <iostream>
#include <stdio.h>
#include <array>

void MergeSort(double* arr, int n);
void MergeSort(double* arr, int low, int high);

void MergeSort(double* arr, int n)
{
    MergeSort(arr, 0, n - 1);
}

void MergeSort(double* arr, int low, int high)
{
    
}

int main()
{
    double arr[] {1.1, 5.5, 3.3, 4.4, 2.2};
    for (double i : arr)
    {
        std::cout << i << std::endl;

    }
    
    return 0;
}