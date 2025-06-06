#include <iostream>

int main(void)
{
    using namespace std;

    const int ft_to_in = 12;
    const double in_to_m = 0.0254;
    const double kg_to_lb = 2.2;

    int foot, inch;
    int pound;
    double meter, kilo;

    cout << "Enter your height in foot: ";
    cin >> foot;//5
    cout << "Enter your height in inch: ";
    cin >> inch;//10
    cout << "Enter your weight in pound ";
    cin >> pound; //154

    meter = (foot * ft_to_in + inch) * in_to_m;
    kilo = pound / kg_to_lb;

    double BMI = kilo / (meter * meter);
    cout << "Your BMI is " << BMI << endl;

    return 0;
}