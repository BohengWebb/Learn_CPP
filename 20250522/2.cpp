#include <iostream>

int main(void)
{
    using namespace std;

    int lo;
    int ma;
    cout << "Type in the long: ";
    cin >> lo;
    ma = lo * 220;
    cout << "It's " << ma << " in ma." << endl;

    cin.get();cin.get();
    return 0;
}