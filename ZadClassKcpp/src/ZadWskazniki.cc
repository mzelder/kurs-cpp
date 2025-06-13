#include "ZadWskazniki.h"
#include <iostream>

void ZadWskazniki::execute() {
    std::cout << "\n=== Zadanie 3.1-3.6 - Wskazniki ===\n";
    pointerArithmetic();
}

void ZadWskazniki::pointerArithmetic() {
    int a = 5, b = 10;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swapWithPointers(&a, &b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout << "Sum of array elements: " << sumWithPointers(arr, size) << std::endl;
}

void ZadWskazniki::swapWithPointers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int ZadWskazniki::sumWithPointers(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}
