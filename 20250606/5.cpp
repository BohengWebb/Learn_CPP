#include <iostream>

int main(void)
{
    using namespace std;
    long long wp, ap;
    double pct;

    cout << "Enter the world's population: ";
    cin >> wp;
    cout << "Enter the population of the US: ";
    cin >> ap;

    pct = ap / (wp / 100.0);
    cout << "The population of the US is " << pct << "% of the world population. " << endl;

    return 0;
}