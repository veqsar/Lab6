#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(10) << showpos << +4 << endl;
    cout << setw(15) << internal << -67.09 << endl;
    cout << setw(10) << right << +235 << endl;
    cout << noshowpos << 8 << "a1" << endl;
    cout << fixed << setprecision(2) << -121.00 << endl;
    cout << showpos << +1 << showpos << +24 << endl;
}
