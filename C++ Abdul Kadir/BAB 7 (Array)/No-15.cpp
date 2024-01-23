#include <iostream>
#include <cmath> // Diperlukan oleh pow()

using namespace std;

int main()
{
    char huruf[3][8] = {
        {0x3C, 0x24, 0x24, 0x7E,
         0x62, 0x62, 0x62, 0x00},
        {0x7C, 0x24, 0x24, 0x3E,
         0x32, 0x32, 0x7E, 0x00},
        {0x3E, 0x22, 0x20, 0x60,
         0x60, 0x62, 0x7E, 0x00}};

    for (int kolom = 0; kolom < 8; kolom++)
    {
        for (int baris = 0; baris < 1; baris++)
        {
            int data = huruf[baris][kolom];

            for (int posBit = 7; posBit >= 0; posBit--)
            {
                int pembagi = pow(2, posBit);
                int bit = data / pembagi;
                if (bit == 1)
                    data = data - pembagi;

                if (bit == 1)
                    cout << (char)219;
                else
                    cout << (char)32;
            }
        }
        cout << endl;
    }

    for (int kolom = 0; kolom < 8; kolom++)
    {
        for (int baris = 1; baris < 2; baris++)
        {
            int data = huruf[baris][kolom];

            for (int posBit = 7; posBit >= 0; posBit--)
            {
                int pembagi = pow(2, posBit);
                int bit = data / pembagi;
                if (bit == 1)
                    data = data - pembagi;

                if (bit == 1)
                    cout << (char)219;
                else
                    cout << (char)32;
            }
        }
        cout << endl;
    }
    for (int kolom = 0; kolom < 8; kolom++)
    {
        for (int baris = 2; baris < 3; baris++)
        {
            int data = huruf[baris][kolom];

            for (int posBit = 7; posBit >= 0; posBit--)
            {
                int pembagi = pow(2, posBit);
                int bit = data / pembagi;
                if (bit == 1)
                    data = data - pembagi;

                if (bit == 1)
                    cout << (char)219;
                else
                    cout << (char)32;
            }
        }
        cout << endl;
    }
    return (0);
}
