#include <iostream>
using namespace std;

const int strsize = 20;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

const int arsize = 5;
bop member[arsize] = {
    {"A full", "A title", "A bop", 0},
    {"B full", "B title", "B bop", 1},
    {"C full", "C title", "C bop", 2},
    {"D full", "D title", "D bop", 0},
    {"E full", "E title", "E bop", 1},
};

void displaystyle(int);

int main(void)
{
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name       b. display by title\n";
    cout << "c. display by bopname    d. display by preference\n";
    cout << "q. quit\n";

    char ch;
    cout << "Enter your choice: ";
    cin >> ch;
    while (ch != 'q')
    {
        switch (ch)
        {
        case 'a':
        {
            displaystyle(0);
            break;
        }
        case 'b':
        {
            displaystyle(1);
            break;
        }
        case 'c':
        {
            displaystyle(2);
            break;
        }
        case 'd':
        {
            displaystyle(3);
            break;
        }
        default:
        {
            cout << "Invalid operation!\n";
            break;
        }
        }
        cout << "Next choice: ";
        cin >> ch;
    }
    cout << "Bye!\n";

    return 0;
}

void displaystyle(int k)
{
    for (int i = 0; i < arsize; ++i)
    {
        switch (k)
        {
        case 0:
        {
            cout << member[i].fullname << endl;
            break;
        }
        case 1:
        {
            cout << member[i].title << endl;
            break;
        }
        case 2:
        {
            cout << member[i].bopname << endl;
            break;
        }
        case 3:
        {
            switch (member[i].preference)
            {
            case 0:
            {
                cout << member[i].fullname << endl;
                break;
            }
            case 1:
            {
                cout << member[i].title << endl;
                break;
            }
            case 2:
            {
                cout << member[i].bopname << endl;
                break;
            }
            }
        }
        }
    }
}