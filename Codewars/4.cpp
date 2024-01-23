#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int b)
{
    if (b < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(b); i++)
    {
        if (b % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << " = " << isPrime(i);
    }
}