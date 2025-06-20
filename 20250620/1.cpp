#include <iostream>

int main(void)
{
    using namespace std;

    int num1;
    int num2;
    int sum = 0;

    cout << "Enter the smaller number: ";
    cin >> num1;
    cout << "Enter the bigger number: ";
    cin >> num2;

    for (int i = num1; i <= num2; ++i)
    {
        sum += i;
    }

    cout << "The sum of numbers between " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}