#include <iostream>
using namespace std;

enum Month {
    January, February, March, April, May, June, July,
    August, September, October, November, December
};

enum class MonthScoped {
    January, February, March, April, May, June, July,
    August, September, October, November, December
};

int main() {
    Month currentMonth = March;
    cout << "Current month (unscoped enum): " << currentMonth << endl;

    MonthScoped nextMonth = MonthScoped::April;
    cout << "Next month (scoped enum): " << static_cast<int>(nextMonth) << endl;

    return 0;
}
