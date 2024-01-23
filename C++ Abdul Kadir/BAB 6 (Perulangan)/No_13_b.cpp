#include <iostream>
using namespace std;

int main()
{
    int i;
    i = 2;
    while (i != 100)
    {
        if (i % 8 == 0)
        {
            cout << i << endl;
        }
        i++;
    }
}
