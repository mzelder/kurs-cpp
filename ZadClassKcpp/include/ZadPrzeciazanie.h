#ifndef ZADPRZECIAZANIE_H
#define ZADPRZECIAZANIE_H

#include "ZadKcpp.h"
#include <string>

class ZadPrzeciazanie : public ZadKcpp {
public:
    void execute() override;
    
private:
    int add(int a, int b);
    double add(double a, double b);
    std::string add(const std::string& a, const std::string& b);
    
    class Point {
    public:
        int x, y;
        Point(int x = 0, int y = 0) : x(x), y(y) {}
        Point operator+(const Point& other) {
            return Point(x + other.x, y + other.y);
        }
    };
};

#endif
