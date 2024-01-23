#include <iostream>
#include <string>

using namespace std;

int main()
{
    string teks;
    string teks_2;
    int jum = 0;
    getline(cin, teks);
    getline(cin, teks_2);
    string simpan;
    string hasil;

    for (int i = 0; i < teks.size(); i++)
    {
        char ch = teks[i];
        bool duplicate = false;
        for (int j = 0; j < hasil.size(); j++)
        {
            if (ch == hasil[j])
            {
                duplicate = true;
                break;
            }
        }

        if (teks_2.find(ch) != string::npos && !duplicate)
        {
            hasil += ch;
            jum++;
        }
    }

    cout << "Hasil: " << hasil << jum;

    return 0;
}
