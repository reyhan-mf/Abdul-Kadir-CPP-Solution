#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y || y == z)
    {
        cout << "Ada angka yang sama!";
    }
    else
    {
        cout << "Angkanya berbeda!";
    }
}
