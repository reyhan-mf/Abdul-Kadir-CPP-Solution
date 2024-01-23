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
    for (int i = 0; i < teks.size(); i++)
    {
        char kar = teks[i];
        if (strVok.find(kar) == -1)
        {
            taro += teks[i];
        }
    }
    cout << taro;
}