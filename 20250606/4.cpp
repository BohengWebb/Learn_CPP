#include <iostream>

int main(void)
{
    using namespace std;

    long long gt_s;
    long long s, m, h, d;

    const int s_to_m = 60;
    const int m_to_h = 60;
    const int h_to_d = 24; 

    cout << "Enter the number of seconds: ";
    cin >> gt_s;
    s = gt_s;

    m = s / s_to_m;
    s -= m * s_to_m;

    h = m / m_to_h;
    m -= h * m_to_h;

    d = h / h_to_d;
    h -= d * h_to_d;

    cout << gt_s << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds" << endl;
    
    return 0;
}