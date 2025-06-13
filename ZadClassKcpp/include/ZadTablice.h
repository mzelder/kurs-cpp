#ifndef ZADTABLICE_H
#define ZADTABLICE_H

#include "ZadKcpp.h"

class ZadTablice : public ZadKcpp {
public:
    void execute() override;
    
private:
    void arrayOperations();
    void printArray(int arr[], int size);
};

#endif
