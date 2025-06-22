// 我勒个豆啊这个题我也不会

#include <iostream>
#include <cstring>

const int SIZE = 20;
const char FINISHED[] = "done";

int main(void)
{
    using namespace std;

    int counter = 0;
    char words[SIZE];
    cout << "Enter words (to stop, type the word done): \n";

    while (strcmp(FINISHED, words))
    {
        counter++;
        cin >> words;
        cin.get();
    }

    cout << "You entered a total of " << (counter - 1) << " words. \n";

    return 0;
}