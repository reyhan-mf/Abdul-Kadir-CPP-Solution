#include <iostream>

using namespace std;

int main()
{
    int jumData;
    cin >> jumData;
    int data[jumData];
    for (int i = 0; i < jumData; i++)
    {
        cin >> data[i];
    }
    cout << "Sebelum: ";
    for (int i = 0; i < jumData; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
    int sementara;
    cout << "Sesudah: ";
    for (int i = 0; i < 4; i++)
    {
        sementara = data[i];
        data[i] = data[(jumData - 1) - i];
        data[(jumData - 1) - i] = sementara;
    }
    for (int i = 0; i < jumData; i++)
    {
        cout << data[i] << " ";
    }
}