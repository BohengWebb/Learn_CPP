#include <iostream>

int main(void)
{
    using namespace std;

    int getnum;
    int sum = 0;

    cout << "Enter the number: ";
    cin >> getnum;

    while (getnum)
    {
        sum += getnum;
        cout << "Current sum is: " << sum << endl;
        cout << "Enter the number: ";
        cin >> getnum;
    }

    /* Trae 提供的简化版本：

    while (cout << "Enter the number: ", cin >> getnum, getnum) { // 逗号表达式的值以右端为准，此处的值为 getnum 的强制 Bool 值
        sum += getnum;
        cout << "Current sum is: " << sum << endl;
    }
    
    */
    
    return 0;
}