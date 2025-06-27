#include <iostream>
#include <cctype>

int main(void)
{
    using namespace std;

    cout << "Please enter a line: " << endl;

    char ch;
    cin.get(ch);
    while (ch != '@')
    {
        if (isdigit(ch))
        {
            cin.get(ch);
            continue;
        }
        else if (isupper(ch))
        {
            ch = tolower(ch);
            cout << ch;
        }
        else if (islower(ch))
        {
            ch = toupper(ch);
            cout << ch;
        }
        else
        {
            cout << ch;
        }
        cin.get(ch);
    }

    cout << "\nBye!\n";

    return 0;
}