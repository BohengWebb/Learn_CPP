#include <iostream>

int main(void)
{
    using namespace std;
    double lpkm, mpg;

    cout << "Enter: ";
    cin >> lpkm;

    mpg = lpkm / 27 * 8.7;

    cout << "mpg is " << mpg << endl;

    return 0;
}