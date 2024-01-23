#include <iostream>
using namespace std;

int main()
{
    int i = 2; // Inisialisasi i dilakukan di luar loop
    do
    {
        if (i % 8 == 0)
        {
            cout << i << endl;
        }   
        i = i + 1;
    } while (i != 100);
}
