#include <iostream>
#include <string>

struct PizzaItem
{
    std::string name;
    double diameter;
    double weight;
};

int main(void)
{
    using namespace std;

    PizzaItem * pizza = new PizzaItem;
    
    cout << "Enter the diameter of pizza: " << endl;
    cin >> pizza->diameter;
    cin.get();
    cout << "Enter the name of pizza: " << endl;
    getline(cin, pizza->name);
    cout << "Enter the weight of pizza: " << endl;
    cin >> pizza->weight;

    cout << "Diameter: " << pizza->diameter << endl;
    cout << "Name: " << pizza->name << endl;
    cout << "Weight: " << pizza->weight << endl;

    delete pizza; // 一定要记得回收空间！！！

    return 0;
}