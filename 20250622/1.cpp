#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    const int count = 12;
    const string months[count] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEPT", "OCT", "NOV", "DEC"};

    unsigned int sales[count];
    unsigned int sum = 0;

    for (int i = 0; i < count; ++i)
    {
        cout << "Enter the sales in " << months[i] << " month: ";
        cin >> sales[i];
    }

    for (int j = 0; j < count; ++j)
    {
        sum += sales[j];
    }

    cout << "The total sales of the whole year is: " << sum << endl;

    return 0;
}