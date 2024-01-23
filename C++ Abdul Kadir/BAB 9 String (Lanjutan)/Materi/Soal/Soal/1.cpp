#include <iostream>
#include <string>
using namespace std;

int main()
{
    string teks;
    int jum = 0;
    getline(cin, teks);

    string vokal = "aiueoAIUEO";
    for (int i = 0; i < teks.size(); i++)
    {
        char ch = teks[i];
        if (vokal.find(ch) != string::npos)
        {
            jum++;
        }
    }

    cout << "Jumlah Huruf Vokal: " << jum;

    return 0;
}
