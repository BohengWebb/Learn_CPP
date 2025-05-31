#include <iostream>

double convert(double);

int main(void)
{
    using namespace std;

    double lightYear;
    double AU;

    cout << "Enter the number of light years: ";
    cin >> lightYear;
    AU = convert(lightYear);
    cout << lightYear << " light years = " << AU << " astronomical units. " << endl;

    cin.get();cin.get();
    return 0;
}

double convert(double lightYear)
{
    return lightYear * 63240;
}