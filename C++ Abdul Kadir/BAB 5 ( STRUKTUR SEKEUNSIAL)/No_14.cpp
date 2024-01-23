#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    if (q > 100)
        cout << "58K";
    else if (41 <= q && q <= 99)
        cout << "65K";
    else if (21 <= q && q <= 40)
        cout << "68K";
    else if (13 <= q && q <= 20)
        cout << "72K";
    else if (6 <= q && q <= 12)
        cout << "75k";
    else
        cout << "78K";
}
