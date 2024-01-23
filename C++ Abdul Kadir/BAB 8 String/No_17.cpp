#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    const int MAKS_KARAKTER = 254;
    char teks[MAKS_KARAKTER + 1];
    char hasil[MAKS_KARAKTER + 1] = "";

    char strKarakter[2] = "X";

    cin.getline(teks, MAKS_KARAKTER + 1);

    for (int i = strlen(teks) - 1; i >= 0; i--)
    {
        strKarakter[0] = tolower(teks[i]);
        strcat(hasil, strKarakter);
    }
    char cleanedHasil[MAKS_KARAKTER + 1];
    char cleanedTeks[MAKS_KARAKTER + 1];
    int idx = 0;
    int idy = 0;
    for (int i = 0; i < strlen(teks); i++)
    {
        if (isalpha(teks[i]))
        {

            teks[idx] = tolower(teks[i]);
            idx++;
        }
        if (isalpha(hasil[i]))
        {
            hasil[idy] = tolower(hasil[i]);
            idy++;
        }
    }
    teks[idx] = '\0';
    hasil[idy] = '\0';
    cout << teks << " " << hasil;
    if (strcmp(teks, hasil) == 0)
    {
        cout << " Palindrom";
    }
    else
    {
        cout << " Bukan palindrom";
    }
}
