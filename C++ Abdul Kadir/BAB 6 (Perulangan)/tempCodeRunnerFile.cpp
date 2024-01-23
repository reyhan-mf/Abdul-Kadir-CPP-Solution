#include <iostream>
using namespace std;

int main()
{
    int i;
    do
    {
        i = 2;
        if (i % 8 == 0)
        {
            cout << i << endl;
        }
        i = i + 1;
    } while (i != 10);
}