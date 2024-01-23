#include <iostream>
#include <cstring>
#include <cctype> // Library untuk toupper()
using namespace std;

int main()
{
    const int JUM_BARIS = 14;
    char tabel[JUM_BARIS][2][10] = {
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

    char hurufAwal;
    cout << "Masukkan huruf terakhir (huruf besar): ";
    cin >> hurufAwal;

    hurufAwal = toupper(hurufAwal);

    bool adaKota = false;

    for (int i = 0; i < JUM_BARIS; i++)
    {

        char hurufAwalKota = tabel[i][0][0];
        if (hurufAwalKota == hurufAwal)
        {
            cout << tabel[i][0] << " (" << tabel[i][1] << ")" << endl;
            adaKota = true;
        }
    }
    if (!adaKota)
    {
        cout << "Kota tidak terdaftar yang mengandung huruf " << hurufAwal;
    }
    return 0;
}
