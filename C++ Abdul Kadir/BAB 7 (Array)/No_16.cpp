#include <iostream>
using namespace std;

const int JUM_BILANGAN = 10;

int main()
{
    int data_1[JUM_BILANGAN];
    int data_2[JUM_BILANGAN];
    int irisan[JUM_BILANGAN]; // Array untuk menyimpan hasil irisan
    int jumlah_irisan = 0;    // Jumlah elemen dalam irisan

    cout << "Masukkan elemen-elemen array A:" << endl;
    for (int i = 0; i < JUM_BILANGAN; i++)
    {
        cout << "Data " << i << ": ";
        cin >> data_1[i];
    }

    cout << "Masukkan elemen-elemen array B:" << endl;
    for (int j = 0; j < JUM_BILANGAN; j++)
    {
        cout << "Data " << j << ": ";
        cin >> data_2[j];
    }

    for (int i = 0; i < JUM_BILANGAN; i++)
    {
        bool isDuplicate = false; // Menyimpan informasi apakah elemen sudah ada dalam irisan sebelumnya
        for (int j = 0; j < jumlah_irisan; j++)
        {
            if (data_1[i] == irisan[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate)
        {
            continue; // Lanjut ke elemen selanjutnya jika elemen sudah ada dalam irisan
        }

        for (int j = 0; j < JUM_BILANGAN; j++)
        {
            if (data_1[i] == data_2[j])
            {
                irisan[jumlah_irisan] = data_1[i];
                jumlah_irisan++;
                break;
            }
        }
    }

    cout << "Irisan antara A dan B adalah: ";
    for (int i = 0; i < jumlah_irisan; i++)
    {
        cout << irisan[i] << " ";
    }
    cout << endl;

    return 0;
}
