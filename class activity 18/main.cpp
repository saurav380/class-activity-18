#include "bubble_sort.hpp"
#include "print_array.hpp"
#include <iostream>
using namespace std;

int main() {
    int arr[] = { 4, 8, 7, 5, 2 , 3, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, size);

    bubbleSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
