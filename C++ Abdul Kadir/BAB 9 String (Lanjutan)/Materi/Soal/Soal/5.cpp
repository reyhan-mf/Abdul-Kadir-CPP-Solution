#include <iostream>
#include <cstring>
#include <cctype> // Library untuk toupper()
using namespace std;

int main()
{
    string teks;
    string hasil;
    string simpan;
    getline(cin, teks);
    for (int i = 0; i <= teks.size() - 1; i++)
    {
        if (isalpha(teks[i]))
        {
            simpan += tolower(teks[i]);
        }
    }
    for (int i = simpan.size() - 1; i >= 0; i--)
    {
        hasil += simpan[i];
    }

    if (simpan.compare(hasil) == 0)
    {
        cout << teks << " Merupakan Palindrom";
    }
    else
    {
        cout << teks << " bukan Palindrom";
    }

    return 0;
}
