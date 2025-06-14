#include <iostream>

int main(void)
{
    using namespace std;

    const int ArSize = 20;
    char first_name[ArSize];
    char last_name[ArSize];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(first_name, ArSize);
    cout << "What is your last name? ";
    cin.getline(last_name, ArSize);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    grade += 1;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}