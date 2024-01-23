#include <iostream>
#include <cstring>
using namespace std;

bool isDuplicate(char str[], char ch)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char kari[255];
    char kalima[256];
    char hasil[256] = "";
    char strKarakter[] = "a";
    cin.getline(kari, 256);
    cin.getline(kalima, 256);

    bool ada = true;
    for (int i = 0; i < strlen(kalima); i++)
    {
        char kar = tolower(kalima[i]);
        if (strchr(strlwr(kari), kar))
        {
            ada = false;
        }
    }
    if (!ada)
    {
        for (int i = 0; i < strlen(kalima); i++)
        {

            char kar = tolower(kalima[i]);

            if (strchr(strlwr(kari), kar) && !isDuplicate(hasil, kar))
            {
                strKarakter[0] = kar;
                strcat(hasil, strKarakter);
            }
        }
    }
    else
    {
        cout << "Tidak ada yang sama ";
    }

    for (int i = 0; i < strlen(hasil); i++)
    {
        cout << hasil[i] << " ";
    }

    return 0;
}
