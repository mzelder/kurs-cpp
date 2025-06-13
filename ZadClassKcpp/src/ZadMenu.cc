#include "ZadMenu.h"
#include <iostream>

void ZadMenu::addTask(ZadKcpp* task) {
    tasks.push_back(task);
}

void ZadMenu::showMenu() {
    std::cout << "\n===== Menu =====\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i+1 << ". Task " << i+1 << "\n";
    }
    std::cout << "0. Exit\n";
    std::cout << "===============\n";
}

void ZadMenu::executeTask(int choice) {
    if (choice > 0 && choice <= static_cast<int>(tasks.size())) {
        tasks[choice-1]->execute();
    }
}

ZadMenu::~ZadMenu() {
    for (auto task : tasks) {
        delete task;
    }
}
