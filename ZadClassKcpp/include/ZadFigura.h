#ifndef ZADFIGURA_H
#define ZADFIGURA_H

#include "ZadKcpp.h"
#include <cmath>

class ZadFigura : public ZadKcpp {
public:
    void execute() override;
    
private:
    class Figura {
    public:
        virtual double obliczObwod() const = 0;
        virtual double obliczPole() const = 0;
        virtual ~Figura() {}
    };
    
    class Kwadrat : public Figura {
        double bok;
    public:
        Kwadrat(double b) : bok(b) {}
        double obliczObwod() const override { return 4 * bok; }
        double obliczPole() const override { return bok * bok; }
    };
    
    class Kolo : public Figura {
        double promien;
    public:
        Kolo(double r) : promien(r) {}
        double obliczObwod() const override { return 2 * M_PI * promien; }
        double obliczPole() const override { return M_PI * promien * promien; }
        double dystans(double x) const { return sqrt(x / M_PI); }
    };
};

#endif
