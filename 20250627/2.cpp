#include <iostream>

const int ArSize = 10;

int main(void)
{
    using namespace std;

    double donation[ArSize];
    int i = 0;

    // 这一段如何输入的代码很重要！
    cout << "Donation #1: ";
    while (i < ArSize && (cin >> donation[i]))
    {
        if (++i < ArSize)
        {
            cout << "Donation #" << i+1 << ": ";
        }
    }

    double sum = 0.0;
    for (int j = 0; j < i; ++j)
    {
        sum += donation[j];
    }
    double ave = sum / i;

    int count = 0;
    for (int j = 0; j < i; ++j)
    {
        if (donation[j] > ave)
        {
            count++;
        }
    }

    cout << "The average of the array is: " << ave << endl;
    cout << "And there are " << count << " numbers bigger than the average.\n";

    return 0;
}