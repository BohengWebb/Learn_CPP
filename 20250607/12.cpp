#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(void)
{
    using namespace std;

    inflatable guests[2] =
    {
        { "Bambi", 0.5, 21.99 },
        { "Godzilla", 2000, 565.99 }
    };

    cout << "The guests " << guests[0].name << " and " << guests[1].name;
    cout << "\nhave a combined volume of " << guests[0].volume + guests[1].volume;
    cout << " cubic feet.\n";

    return 0;
}
