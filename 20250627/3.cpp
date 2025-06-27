#include <iostream>

using namespace std;

void carnivore(void);
void painist(void);
void tree(void);
void game(void);

int main(void)
{
    char ch;
    
    cout << "------------------------------------------------\n";
    cout << "Please enter one of the following choices: \n";
    cout << "c) carnivore   p) painist\n";
    cout << "t) tree        g) game\n";
    cout << "------------------------------------------------\n";
    cout << "Now, enter your wise choice: ";

    readline: cin >> ch;
    switch (ch)
    {
        case 'c':
        {
            carnivore();
            break;
        }
        case 'p':
        {
            painist();
            break;
        }
        case 't':
        {
            tree();
            break;
        }
        case 'g':
        {
            game();
            break;
        }
        default:
        {
            cout << "Please enter a c, p, t, or g: ";
            goto readline;
        }
    }
}

void carnivore(void)
{
    cout << "Now you are in carnivore!\n";
}

void painist(void)
{
    cout << "Now you are in painist!\n";
}

void tree(void)
{
    cout << "Now you are in tree!\n";
}

void game(void)
{
    cout << "Now you are in game!\n";
}