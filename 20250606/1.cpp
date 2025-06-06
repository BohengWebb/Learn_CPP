#include <iostream>

int main(void)
{
    using namespace std;
    const int convert = 12;
    int inch;
    int foot;
    cout << "Enter your height in inch: ________\b\b\b\b\b\b\b\b";
    cin >> inch;
    foot = inch / convert;
    inch = inch % convert;
    cout << "Your height is " << foot << " foot " << inch << " inch. " << endl;
    return 0;
}