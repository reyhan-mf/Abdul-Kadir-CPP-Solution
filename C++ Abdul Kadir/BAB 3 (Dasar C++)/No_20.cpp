#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int bilangan;
    cout << "Masukkan bilangan bulat: ";
    cin >> bilangan;

    cout << "Tampilan: ";
    cout << setfill('*'); // Fungsi untuk mengisi kekosongan pada setw.
    cout << setw(10) << bilangan << endl;

    return 0;
}
