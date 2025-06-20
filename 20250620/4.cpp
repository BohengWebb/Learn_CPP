#include <iostream>

int main(void)
{
    const double rateDaphne = 0.1;
    const double rateCleo = 0.05;

    double currentDaphne = 100.0;
    double currentCleo = 100.0;

    int year;

    for (int i = 1; currentCleo <= currentDaphne; ++i)
    {
        currentCleo *= (1 + rateCleo);
        currentDaphne += 100 * rateDaphne;
        year = i;
    }

    std::cout << "Year:" << year << "\nCurrent Daphne: " << currentDaphne << "\nCurrent Cleo: " << currentCleo << std::endl;
    
    return 0;
}