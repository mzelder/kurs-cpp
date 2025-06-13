#ifndef ZADOPERATORY_H
#define ZADOPERATORY_H

#include "ZadKcpp.h"

class ZadOperatory : public ZadKcpp {
public:
    void execute() override;
    
private:
    void operatorExamples();
    void assignmentOperators();
};

#endif
