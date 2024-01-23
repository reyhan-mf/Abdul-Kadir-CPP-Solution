#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void tampilVertikal(int n)
{
    if (n < 10)
    {
        cout << n << endl;
    }
    else if (n >= 10)
    {
        tampilVertikal(n / 10);
        cout << n % 10 << endl;
    }
}

int main()
{
    tampilVertikal(10);
}
