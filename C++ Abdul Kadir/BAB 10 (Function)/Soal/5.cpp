#include <iostream>
#include <cstring>
#include <cctype>
#include <cs50.h>
using namespace std;

string encode(string teks)
{
    string hasil = teks;
    for (int i = 0; i < teks.length(); i++)
    {
        char kar = teks[i];

        if (kar == 'a')
        {
            kar = '1';
        }
        else if (kar == 'e')
        {
            kar = '2';
        }
        else if (kar == 'i')
        {
            kar = '3';
        }
        else if (kar == 'o')
        {
            kar = '4';
        }
        else if (kar == 'u')
        {
            kar = '5';
        }

        hasil[i] = kar;
    }
    return hasil;
}

string decode(string teks)
{
    string hasil = teks;
    for (int i = 0; i < teks.length(); i++)
    {
        char kar = teks[i];
        if (kar == '1')
        {
            kar = 'a';
        }
        else if (kar == '2')
        {
            kar = 'e';
        }
        else if (kar == '3')
        {
            kar = 'i';
        }
        else if (kar == '4')
        {
            kar = 'o';
        }
        else if (kar == '5')
        {
            kar = 'u';
        }
        hasil[i] = kar;
    }
    return hasil;
}

int main()
{
    cout << decode("h3 th2r2");
}
