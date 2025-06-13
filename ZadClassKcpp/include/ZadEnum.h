#ifndef ZADENUM_H
#define ZADENUM_H

#include "ZadKcpp.h"
#include <string>

class ZadEnum : public ZadKcpp {
public:
    void execute() override;
    
private:
    enum class Month {
        January = 1, February, March, April, May, June,
        July, August, September, October, November, December
    };
    
    std::string monthToString(Month month);
};

#endif
