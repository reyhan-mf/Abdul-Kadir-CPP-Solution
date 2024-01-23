#include <iostream>
#include <cstring>
#include <cctype> // Library untuk toupper()
using namespace std;

int main()
{
    const int JUM_BARIS = 14;
    string tabel[JUM_BARIS][2] = {
        {"Baden", "Austria"},
        {"Bandung", "Indonesia"},
        {"Bogor", "Indonesia"},
        {"Graz", "Austria"},
        {"Innsbruck", "Austria"},
        {"Kariya", "Jepang"},
        {"Kudus", "Indonesia"},
        {"Kyoto", "Jepang"},
        {"Linz", "Austria"},
        {"Nagoya", "Jepang"},
        {"Samarinda", "Indonesia"},
        {"Tokyo", "Jepang"},
        {"Toyokawa", "Jepang"},
        {"Wina", "Austria"}};

    string kota;
    getline(cin, kota);

    char inputChar = toupper(kota[0]);
    char firstChar;
    bool kotaDitemukan = false;
    for (int i = 0; i < JUM_BARIS; i++)
    {
        string kotai = tabel[i][0];

        firstChar = toupper(kotai[0]);
        cout << inputChar << " " << firstChar << endl;
        if (inputChar == firstChar)
        {
            cout << tabel[i][0] << " - " << tabel[i][1] << endl;
            kotaDitemukan = true;
        }
    }

    if (!kotaDitemukan)
    {
        cout << "Kota dengan huruf awal '" << inputChar << "' tidak ditemukan." << endl;
    }

    return 0;
}
