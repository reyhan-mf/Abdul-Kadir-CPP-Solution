#include <iostream>
using namespace std;

int main()
{
    int y = 0;
    for (int i = 2; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            y = y + (i * i);
            cout << ": " << y << endl;
        }
    }
}
