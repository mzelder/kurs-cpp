#include "ZadTablice.h"
#include <iostream>

void ZadTablice::execute() {
    std::cout << "\n=== Zadanie 2.6 - Tablice ===\n";
    arrayOperations();
}

void ZadTablice::arrayOperations() {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    
    std::cout << "Original array: ";
    printArray(arr, SIZE);
    
    // Pass array with size
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    std::cout << "Sum of array elements: " << sum << std::endl;
}

void ZadTablice::printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
