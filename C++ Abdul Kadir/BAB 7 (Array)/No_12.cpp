#include <iostream>
using namespace std;

int main()
{
    int maks;
    cout << "Masukkan banyak bilangan: ";
    cin >> maks;
    int data[maks];
    for (int i = 0; i < maks; i++)
    {
        cin >> data[i];
    }

    for (int i = 0; i < maks; i++)
    {
        if (i < maks / 2)
        {
            cout << data[i * 2 + 1] << " ";
            cout << data[i * 2] << " ";
        }
        else if ((2 * i > 2) && (maks % 2 == 1))
        {
            cout << data[i];
            break;
        }
    }
}