#include <iostream>
#include <string>

struct donor
{
    std::string name;
    double money;
};

int main()
{
    using namespace std;

    int ArSize;
    int grandCount = 0;
    int normCount = 0;

    cout << "Tell me how many donors there are: ";
    cin >> ArSize;

    donor * memberlist = new donor [ArSize];
    
    int i = 0;
    while (i < ArSize)
    {
        cout << "Donor #" << (i + 1) << ": ";
        cin >> (memberlist + i)->name;
        cin >> (memberlist + i)->money;
        if ((memberlist + i)->money >= 10000)
        {
            grandCount++;
        }
        else
        {
            normCount++;
        }
        ++i;
    }

    i = 0;
    cout << "\n-------------------------\nGrand Patrons\n-------------------------\n";
    if (grandCount)
    {
        while (i < ArSize)
        {
            if ((memberlist + i)->money >= 10000)
            {
                cout << (memberlist + i)->name << ": " << (memberlist + i)->money << endl;
            }
            ++i;
        }
    }
    else
    {
        cout << "none\n"; 
    }

    i = 0;
    cout << "\n-------------------------\nPatrons\n-------------------------\n";
    if (normCount)
    {
        while (i < ArSize)
        {
            if ((memberlist + i)->money < 10000)
            {
                cout << (memberlist + i)->name << ": " << (memberlist + i)->money << endl;
            }
            ++i;
        }
    }
    else
    {
        cout << "none\n"; 
    }

    delete [] memberlist;

    return 0;
}