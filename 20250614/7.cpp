#include <iostream>

struct CandyBar
{
    char brand[15];
    double weight;
    unsigned int calory;
};

int main(void)
{
    CandyBar snack[3] = {
        {"A", 1.0 ,300},
        {"B", 2.0 ,400},
        {"C", 3.0, 500}
    };

    std::cout << snack[0].brand << " " << snack[0].weight << " " << snack[0].calory << std::endl;
    std::cout << snack[1].brand << " " << snack[1].weight << " " << snack[1].calory << std::endl;
    std::cout << snack[2].brand << " " << snack[2].weight << " " << snack[2].calory << std::endl;

    return 0;
}