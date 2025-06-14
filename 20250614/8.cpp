#include <iostream>
#include <string>

struct PizzaItem
{
    std::string name; // string 类在 std 名称空间里！
    double diameter;
    double weight;
};

int main(void)
{
    using namespace std;

    PizzaItem pizza;

    cout << "Enter the name of pizza: " << endl;
    getline(cin, pizza.name);
    cout << "Enter the diameter of pizza: " << endl;
    cin >> pizza.diameter;
    cout << "Enter the weight of pizza: " << endl;
    cin >> pizza.weight;

    cout << "Name: " << pizza.name << endl;
    cout << "Diameter: " << pizza.diameter << endl;
    cout << "Weight: " << pizza.weight << endl;

    return 0;
}