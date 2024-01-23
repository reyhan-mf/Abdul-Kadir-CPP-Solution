#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
void tampilPemisah(string teks, char pemisah = ' ')
{

    for (int i = 0; i < teks.length(); i++)
    {
        if (i != teks.length() - 1)
            cout << teks[i] << pemisah;
        else
            cout << teks[i];
    }
}

int main()
{
    tampilPemisah("ABCDEF", '-');
}
