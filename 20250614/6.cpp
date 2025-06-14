#include <iostream>

struct CandyBar
{
    char brand[15];
    double weight;
    unsigned int calory;
};

int main(void)
{
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };

    std::cout << snack.brand << " " << snack.weight << " " << snack.calory << std::endl;

    return 0;
}