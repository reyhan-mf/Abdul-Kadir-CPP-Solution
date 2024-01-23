#include <iostream>

using namespace std;

int main()
{
    double h, p, t;
    const double diskon = 0.1;
    cout << "Masukkan harga: ";
    cin >> h;
    cout << "Besar diskon : ";
    p = (h * diskon);
    cout << p << endl;
    t = h - p;
    cout << "Harga Total: ";
    cout << t;
}