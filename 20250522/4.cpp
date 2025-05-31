#include <iostream>

int main(void)
{
    using namespace std;

    int age;
    int month;

    cout << "Enter your age: ";
    cin >> age;
    month = age * 12;
    cout << "Your age in month is " << month << ". " << endl;

    cin.get();cin.get();
    return 0;
}