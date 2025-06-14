#include <iostream>
#include <cstring>

struct CandyBar
{
    char brand[15];
    double weight;
    unsigned int calory;
};

int main(void)
{
    CandyBar * pcandy = new CandyBar[3];

    strcpy(pcandy->brand, "A");
    pcandy->weight = 1.0;
    pcandy->calory = 300;
    
    strcpy((pcandy + 1)->brand, "B");
    (pcandy + 1)->weight = 2.0;
    (pcandy + 1)->calory = 400;
    
    strcpy((pcandy + 2)->brand, "C");
    (pcandy + 2)->weight = 3.0;
    (pcandy + 2)->calory = 500;

    std::cout << pcandy->brand << " " << pcandy->weight << " " << pcandy->calory << std::endl;
    std::cout << (pcandy + 1)->brand << " " << (pcandy + 1)->weight << " " << (pcandy + 1)->calory << std::endl;
    std::cout << (pcandy + 2)->brand << " " << (pcandy + 2)->weight << " " << (pcandy + 2)->calory << std::endl;

    delete [] pcandy;
    return 0;
}