#ifndef ZADPETLE_H
#define ZADPETLE_H

#include "ZadKcpp.h"

class ZadPetle : public ZadKcpp {
public:
    void execute() override;
    
private:
    void loopExamples();
    void whileLoop();
    void doWhileLoop();
    void forLoop();
};

#endif
