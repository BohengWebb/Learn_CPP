#include <iostream>
#include <string>

struct car
{
    std::string make;
    unsigned int year;
};

int main(void)
{
    using namespace std;

    unsigned int count;

    cout << "How many cars do you wish to catalog? ";
    cin >> count;
    cin.get();

    car * CarInfo = new car[count];

    for (int i = 0; i < count; ++i)
    {
        cout << "Car #" << (i + 1) << ":\n";

        cout << "Please enter the make: ";
        getline(cin, CarInfo[i].make);
        
        cout << "Please enter the year made: ";
        cin >> CarInfo[i].year;
        cin.get();
    }

    cout << "Here is your collection: \n";

    for (int i = 0; i < count; ++i)
    {
        cout << CarInfo[i].year << " " << CarInfo[i].make << endl;
    }

    delete [] CarInfo;

    return 0;
}
