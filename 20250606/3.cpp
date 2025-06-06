#include <iostream>

int main(void)
{
    using namespace std;

    const int convert = 60;

    double gt_degree, gt_minute, gt_second;
    double degree;

    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: "; 
    cin >> gt_degree;
    cout << "Next, enter the minutes of arc: "; 
    cin >> gt_minute;
    cout << "Finally, enter the seconds of arc: "; 
    cin >> gt_second;

    degree = gt_degree + (gt_minute + (gt_second / convert)) / convert;
    cout << gt_degree << " degrees, " << gt_minute << " minutes, " << gt_second << " seconds = "
         << degree << " degrees" << endl;
    
    return 0;
}