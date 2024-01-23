#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    string teks;
    int jum = 0;
    getline(cin, teks);
    int pos = 0;
    cout << teks.find("ra") << endl;
    do
    {
        int nilaiBalik = teks.find("ra", pos);
        if (nilaiBalik == -1)
        {
            break;
        }
        jum++;
        pos = nilaiBalik + 2;
    } while (pos <= teks.length() - 2);

    cout << "Jumlah substring: " << jum;
}