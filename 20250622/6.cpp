#include <iostream>

int main(void)
{
    using namespace std;

    unsigned int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = (rows - i); j >= 1; --j)
            cout << ".";
        for (int j = 1; j <= i; ++j)
            cout << "*";
        cout << endl;
    }
}