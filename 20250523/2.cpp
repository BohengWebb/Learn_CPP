#include <iostream>

void output(int, int);

int main(void)
{
    using namespace std;

    int hours;
    int minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    output(hours, minutes);

    cin.get();cin.get();
    return 0;
}

void output(int hours, int minutes)
{
    using namespace std;

    cout << "Time: " << hours << ":" << minutes << endl;
}