#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    const int count = 12;
    const string months[count] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEPT", "OCT", "NOV", "DEC"};

    unsigned int sales[3][count];
    unsigned int sum[3] = {0, 0, 0};
    unsigned int total = 0;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < count; ++j)
        {
            cout << "Enter the sales in " << months[j] << " month of Year " << (i + 1) << ": ";
            cin >> sales[i][j];
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < count; ++j)
        {
            sum[i] += sales[i][j];
        }
        cout << "The total sales of Year " << (i + 1) << " is: " << sum[i] << endl;
    }

    for (int i = 0; i < 3; ++i)
    {
        total += sum[i];
    }
    cout << "The total sales of the three years is: " << total << endl;

    return 0;
}