#include <iostream>

int main(void)
{
    using namespace std;

    int mile, oil;
    double result;

    cout << "Enter the miles: ";
    cin >> mile;
    cout << "Enter the oil: ";
    cin >> oil;

    result = oil * 100.0 / mile;
    cout << result << " liters per 100km.";

    return 0;
}