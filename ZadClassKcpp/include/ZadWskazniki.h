#ifndef ZADWSKAZNIKI_H
#define ZADWSKAZNIKI_H

#include "ZadKcpp.h"

class ZadWskazniki : public ZadKcpp {
public:
    void execute() override;
    
private:
    void pointerArithmetic();
    void swapWithPointers(int* a, int* b);
    int sumWithPointers(int* arr, int size);
};

#endif
