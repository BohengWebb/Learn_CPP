#include <iostream>

int main()
{
    using namespace std;

    double income;
    double tax = 0.0;

    cout << "Enter your income: ________ tvarps.\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";

    while ((cin >> income) && (income >= 0))
    {
        if (income <= 5000.0)
        {
            tax = 0.0;
        }
        else if (income > 5000 && income <= 15000)
        {
            tax += 5000 * 0.0;
            tax += (income - 5000) * 0.1;
        }
        else if (income > 15000 && income <= 35000)
        {
            tax += 5000 * 0.0;
            tax += 10000 * 0.1;
            tax += (income - 15000) * 0.15;
        }
        else if (income > 35000)
        {
            tax += 5000 * 0.0;
            tax += 10000 * 0.1;
            tax += 20000 * 0.15;
            tax += (income - 35000) * 0.2;
        }
        cout << "Your income is " << income << " tvarps;" << endl;
        cout << "Your tax is " << tax << " tvarps." << endl;
        cout << "Enter your another income: ________ tvarps.\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    }
    cout << "Bye!\n";

    return 0;
}