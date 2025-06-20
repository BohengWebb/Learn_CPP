#include <iostream>
#include <array>

const int ArSize = 16;

int main(void)
{
    using namespace std;

    array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1;
    for (int i = 2; i < ArSize; ++i)
        factorials[i] = i * factorials[i - 1];
    for (int j = 0; j < ArSize; ++j)
        cout << j << "! = " << factorials[j] << endl;
    
    return 0;
}