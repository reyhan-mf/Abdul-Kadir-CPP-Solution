#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

unsigned long long int fak(int n)
{
    int hasil = 1;
    for (int i = 1; i <= n; i++)
    {
        hasil = hasil * i;
    }
    return hasil;
}

int main()
{

    cout << fak(6);
}
