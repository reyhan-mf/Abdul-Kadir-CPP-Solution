#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    string teks;
    getline(cin, teks);
    int length = teks.size();
    string taro = "";
    string strVok = "aiueoAIUEO";
    int kap = 0;
    int kec = 0;
    for (int i = teks.size() - 1; i >= 0; i--)
    {
        taro += teks[i];
    }

    if (teks.compare(taro) == 0)
    {
        cout << "Palindrom";
    }
    else
    {
        cout << "Bukan Palindrom";
    }
}