#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int a = 1; a <= n; a++)
        {
            if ((i <= n - 1 && i > 1) && ((a < n) && (a > 1)))
            {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << setw(3);
        for (int k = 1; k <= n; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
