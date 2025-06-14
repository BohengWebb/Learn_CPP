#include <iostream>
#include <array>

int main(void)
{
    using namespace std;

    array<double, 3> grade; // 模板类 array 在 std 名称空间里！

    cout << "Enter your 1st grade: ";
    cin >> grade[0];
    cout << "Enter your 2nd grade: ";
    cin >> grade[1];
    cout << "Enter your 3rd grade: ";
    cin >> grade[2];

    double ave = (grade[0] + grade[1] + grade[2]) / 3;

    cout << "Your grade contains: " << grade[0] << ", " << grade[1] << " and " << grade[2] << ".\n";
    cout << "The average is: " << ave << endl;

    return 0;
}