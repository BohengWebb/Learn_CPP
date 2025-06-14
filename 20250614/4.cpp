#include <iostream>
#include <cstring>

int main(void)
{
    using namespace std;

    const int ArSize = 15;
    char first_name[ArSize];
    char last_name[ArSize];
    char full_name[ArSize*2]; // 一开始没想到这么写

    cout << "Enter your first name: ";
    cin.getline(first_name, ArSize);
    cout << "Enter your last name: ";
    cin.getline(last_name, ArSize);

    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name); // 对 strcpy 和 strcat 这两个函数以及 cstring 库本身还不熟悉

    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}