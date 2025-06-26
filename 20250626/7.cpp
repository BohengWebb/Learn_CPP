#include <iostream>

const int Max = 5;

int main()
{
    using namespace std;

    int golf[Max];

    cout << "Please enter your golf scores.\n";
    cout << "You may enter up to " << Max << " scores.\n";

    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Please enter a number: ";
        }
    }

    double total = 0.0;
    for (int j = 0; j < i; j++)
        total += golf[j];

    if (i == 0)
        cout << "No scores entered!\n";
    else
        cout << total / i << " = average score of " << i << " rounds\n";

    cout << "Done.\n";

    return 0;
}