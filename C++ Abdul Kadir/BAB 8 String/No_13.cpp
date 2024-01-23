#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char teks[255];
    char hasil[256] = "";
    char strKarakter[] = "a";
    cin.getline(teks, 256);
    int vok = 0;
    for (int i = 0; i < strlen(teks); i++)
    {
        char kar = teks[i];
        if (strchr("aeiouAEIOU", kar))
        {
            vok++;
        }
    }
    cout << "Huruf Vokalnya ada " << vok;
    return 0;
}
