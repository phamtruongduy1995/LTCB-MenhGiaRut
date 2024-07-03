#include <iostream>
using namespace std;
int main()
{
    cout << "Tinh Menh Gia\n";
    int t, t500, t200, t100, t50, t20, t10, t5;
    cout << "Nhap so tien t: ";
    cin >> t;
    t500 = t / 500;
    t -= 500 * t500;
    t200 = t / 200;
    t -= 200 * t200;
    t100 = t / 100;
    t -= 100 * t100;
    t50 = t / 50;
    t -= 50 * t50;
    t20 = t / 20;
    t -= 20 * t20;
    t10 = t / 10;
    t -= 10 * t10;
    t5 = t / 5;
    t -= 5 * t5;
    cout << "To 500: " << t500;
    cout << "\nTo 200: " << t200;
    cout << "\nTo 100: " << t100;
    cout << "\nTo 50: " << t50;
    cout << "\nTo 20: " << t20;
    cout << "\nTo 10: " << t10;
    cout << "\nTo 5: " << t5;
    cout << "\nTo 1: " << t;
    cout << "\nTong to tien: " << t + t5 + t10 + t20 + t50 + t100 + t200 + t500;
    return 0;
}