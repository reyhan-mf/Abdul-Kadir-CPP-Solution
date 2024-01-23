#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
void convertCapital(string teks)
{

    string hasil;
    for (int i = 0; i < teks.length(); i++)
    {
        hasil += tolower(teks.at(i));
    }
    cout << hasil;
}

int main()
{
    string teks = "ASDAD";
    convertCapital(teks);
}
