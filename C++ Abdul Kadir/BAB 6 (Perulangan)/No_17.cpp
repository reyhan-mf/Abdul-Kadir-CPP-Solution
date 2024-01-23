#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int baris = n; baris >= 1; baris--)
    {
        for (auto kolom = 1; kolom < baris; kolom++)
        {
            cout << " ";
        }
        for (auto indeks = 1; indeks <= 2 * (n - baris) + 1; indeks++)
        {
            cout << "5";
        }
        cout << endl;
    }
}
