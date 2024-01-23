#include <iostream>
#include <string>

int main()
{
    using namespace std;

    char kar;
    cout << "Masukkan karakter: ";
    cin >> kar;

    bool vokal = (kar == 'A' || kar == 'I' || kar == 'U' || kar == 'E' || kar == 'O' ||
                  kar == 'a' || kar == 'i' || kar == 'u' || kar == 'e' || kar == 'o');

    string hasil = vokal ? "Adalah huruf vokal" : "Bukan huruf vokal";
    cout << hasil;

    return 0;
}
