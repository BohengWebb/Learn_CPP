#include <iostream>
#include <ctime>

int main(void)
{
    using namespace std;
    
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    
    clock_t delay = secs * CLOCKS_PER_SEC; // convert to clock ticks
    cout << "starting\a\n";
    clock_t start = clock();
    
    while (clock() - start < delay)
        ; // nothing to do -- just wait
    
    cout << "done\a\n";
    
    return 0;
}