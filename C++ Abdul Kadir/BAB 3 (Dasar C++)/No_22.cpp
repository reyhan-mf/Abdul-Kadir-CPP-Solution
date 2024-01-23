#include <iostream>

using namespace std;

int main()
{
    double Badu, Sita, Total;
    cout << "Masukkan total umur mereka: ";
    cin >> Total;
    Sita = (Total + 2) / 2;
    Badu = Total - Sita;
    cout << "Umur Badu: " << Badu << endl;
    cout << "Umus Sita: " << Sita;
}