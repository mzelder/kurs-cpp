#ifndef ZADPARZYSTA_H
#define ZADPARZYSTA_H

#include "ZadKcpp.h"

class ZadParzysta : public ZadKcpp {
public:
    void execute() override;
    
private:
    bool isEvenBitwise(int num);
    bool isEvenModulo(int num);
    bool isEvenConditional(int num);
};

#endif
