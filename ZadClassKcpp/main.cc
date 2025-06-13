#include "ZadMenu.h"
#include "ZadFigura.h"
#include "ZadString.h"
#include "ZadParzysta.h"
#include "ZadTablice.h"
#include "ZadWskazniki.h"
#include "ZadOperatory.h"
#include "ZadEnum.h"
#include "ZadPrzeciazanie.h"
#include "ZadPetle.h"
#include "ZadKlasa.h"

int main() {
    ZadMenu menu;
    
    // Add all tasks to menu
    menu.addTask(new ZadEnum());
    menu.addTask(new ZadString());
    menu.addTask(new ZadParzysta());
    menu.addTask(new ZadTablice());
    menu.addTask(new ZadWskazniki());
    menu.addTask(new ZadOperatory());
    menu.addTask(new ZadPrzeciazanie());
    menu.addTask(new ZadPetle());
    menu.addTask(new ZadKlasa());
    menu.addTask(new ZadFigura());
    
    int choice;
    do {
        menu.showMenu();
        std::cout << "Select task (0 to exit): ";
        std::cin >> choice;
        menu.executeTask(choice);
    } while (choice != 0);
    
    return 0;
}