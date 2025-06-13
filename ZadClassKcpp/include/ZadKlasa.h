#ifndef ZADKLASA_H
#define ZADKLASA_H

#include "ZadKcpp.h"
#include <iostream>  // Add this line

class ZadKlasa : public ZadKcpp {
public:
    void execute() override;
    
private:
    class SimpleClass {
    public:
        SimpleClass();
        SimpleClass(int val);
        ~SimpleClass();
        
        void publicMethod();
        inline void inlineMethod() { std::cout << "Inline method called\n"; }
        
    protected:
        int protectedVar;
        void protectedMethod();
        
    private:
        int privateVar;
        void privateMethod();
    };
};

#endif