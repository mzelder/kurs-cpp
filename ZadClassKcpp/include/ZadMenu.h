#ifndef ZADMENU_H
#define ZADMENU_H

#include <vector>
#include "ZadKcpp.h"

class ZadMenu {
public:
    void addTask(ZadKcpp* task);
    void showMenu();
    void executeTask(int choice);
    ~ZadMenu();
    
private:
    std::vector<ZadKcpp*> tasks;
};

#endif
