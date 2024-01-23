#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, d, D, x_1, x_2;
    cout << "Masukkan a, b, c: ";
    cin >> a >> b >> c;
    d = (b * b) - 4 * a * c;

    if (d < 0)
    {
        double Y = sqrt(abs(d));
        double x1_1 = ((-b) / (2 * a));
        double x1_2 = (Y) / (2 * a);
        double x2_1 = ((-b) / (2 * a));
        double x2_2 = (Y) / (2 * a);
        cout
            << "Akar dari: " << a << " X^2 " << b << " X " << c << ": " << x1_1 << " + " << x1_2 << "i"
            << " atau " << x2_1 << " - " << x2_2 << "i";
    }
    else
    {
        D = sqrt(d);
        x_1 = (-b + D) / (2 * a);
        x_2 = (-b - D) / (2 * a);
        cout << "Akar dari: " << a << " X^2 " << b << " X " << c << ": " << x_1 << " atau " << x_2;
    }
}
