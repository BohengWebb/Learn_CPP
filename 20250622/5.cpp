#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    const string FINISHED = "done";
    int counter = 0;
    string words;

    cout << "Enter words (to stop, type the word done): \n";

    while (FINISHED != words)
    {
        counter++;
        cin >> words;
        cin.get();
    }

    cout << "You entered a total of " << (counter - 1) << " words. \n";

    return 0;
}