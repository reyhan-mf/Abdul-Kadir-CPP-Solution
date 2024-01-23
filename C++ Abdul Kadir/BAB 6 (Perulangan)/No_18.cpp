#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setw(10) << "Dec" << setw(10) << "Oct" << setw(10) << "Hex" << endl;
    cout << "--------------------------------------" << endl;
    int a = 8;
    int b = 0;
    int c = 1;
    char z = 97;
    for (int i = 0; i <= 63; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            cout << setw(10) << i;
        }
        for (int k = 1; k < 2; k++)
        {

            if (i >= (a))
            {

                b += 2;
                cout << setw(10) << i + b;
                a += 8;
            }
            else
            {
                cout << setw(10) << i + b;
            }
        }
        for (int l = 1; l < 2; l++)
        {
            if (((10 <= i && i <= 15) || (26 <= i && i <= 31) || (42 <= i && i <= 47) || (58 <= i && i <= 63)))
            {
                if (i < 20)
                {
                    cout << setw(10) << z;
                }
                else
                {
                    if (10 <= i && i <= 15)
                        cout << setw(10) << z;
                    else if (26 <= i && i <= 31)
                        cout << setw(9) << "1" << z;
                    else if (42 <= i && i <= 47)
                        cout << setw(9) << "2" << z;
                    else
                    {
                        cout << setw(9) << "3" << z;
                    }
                }
                if (z == 102)
                {
                    z = 96;
                }
                c++;
                z++;
            }
            else
                cout << setw(10) << i;
        }

        cout << setw(10) << setw(10) << endl;
    }
}
