#include <iostream>

enum {red, orange, yellow, green, blue, violet, indigo};

int main(void)
{
    using namespace std;
    
    cout << "Enter color code (0-6): ";

    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch(code)
        {
            case red: cout << "Her lips were red.\n"; break;
            case orange: cout << "Her hair was orange.\n"; break;
            case yellow: cout << "Her eyes were yellow.\n"; break;
            case green: cout << "Her left sheik was green.\n"; break;
            case blue: cout << "Her skin was blue.\n"; break;
            case violet: cout << "Her right sheik was violet.\n"; break;
            case indigo: cout << "Her mood was indigo.\n"; break;
        }
        cout << "Enter color code (0-6): ";
        cin >> code;
    }

    cout << "Bye\n";

    return 0;
}