#include <iostream>

double convert(double);

int main(void)
{
    using namespace std;

    double C;
    double F;

    cout << "Please enter a Celsius value: ";
    cin >> C;
    F = convert(C);
    cout << C << " degree Celsius is " << F << " degrees Fahrenheit. " << endl;

    cin.get();cin.get();
    return 0;
}

double convert(double C)
{
    return C*1.8 + 32.0;
}