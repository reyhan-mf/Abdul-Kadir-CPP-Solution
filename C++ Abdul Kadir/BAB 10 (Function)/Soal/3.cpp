#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
string convertCapital(string teks)
{
    string hasil;
    for (int i = 0; i < teks.length(); i++)
    {
        hasil += toupper(teks.at(i));
    }
    return hasil;
}

int main()
{
    string teks = "adskjlaj";
    string a = convertCapital(teks);
    cout << a;
}
