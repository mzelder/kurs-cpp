#include "ZadEnum.h"
#include <iostream>
#include <string>

void ZadEnum::execute() {
    std::cout << "\n=== Zadanie 1.0 - Enum Example ===\n";
    
    Month current = Month::November;
    std::cout << "Current month: " << monthToString(current) << std::endl;
    
    for (int i = 1; i <= 12; i++) {
        Month m = static_cast<Month>(i);
        std::cout << i << ": " << monthToString(m) << std::endl;
    }
}

std::string ZadEnum::monthToString(Month month) {
    switch(month) {
        case Month::January: return "January";
        case Month::February: return "February";
        case Month::March: return "March";
        case Month::April: return "April";
        case Month::May: return "May";
        case Month::June: return "June";
        case Month::July: return "July";
        case Month::August: return "August";
        case Month::September: return "September";
        case Month::October: return "October";
        case Month::November: return "November";
        case Month::December: return "December";
        default: return "Unknown";
    }
}
