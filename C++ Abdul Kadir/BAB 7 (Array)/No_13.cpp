#include <iostream>
using namespace std;

int main()
{
    int JUM_BILANGAN;
    int sementara;
    cout << "Masukkan jumlah bilangan: ";
    cin >> JUM_BILANGAN;
    int daftarBil[JUM_BILANGAN];
    for (int i = 0; i < JUM_BILANGAN; i++)
    {
        cin >> daftarBil[i];
    }
    cout << "Sebelum: ";
    for (int i = 0; i < JUM_BILANGAN; i++)
    {
        cout << daftarBil[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < JUM_BILANGAN; i++)
    {
        for (int j = i + 1; j < JUM_BILANGAN; j++)
        {
            if (daftarBil[i] < daftarBil[j])
            {
                sementara = daftarBil[i];
                daftarBil[i] = daftarBil[j];
                daftarBil[j] = sementara;
            }
        }
    }
    cout << "Sesudah: ";
    for (int i = 0; i < JUM_BILANGAN; i++)
    {
        cout << daftarBil[i] << ' ';
    }
}