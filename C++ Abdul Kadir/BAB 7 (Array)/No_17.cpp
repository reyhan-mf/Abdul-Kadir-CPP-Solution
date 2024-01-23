#include <iostream>
using namespace std;
int main()
{
    const int jum_bil = 3;

    int set1[jum_bil];
    int set2[jum_bil];
    for (int i = 0; i < jum_bil; i++)
    {
        cout << "i: ";
        cin >> set1[i];
    }
    for (int j = 0; j < jum_bil; j++)
    {
        cout << "j: ";
        cin >> set2[j];
    }

    const int size1 = sizeof(set1) / sizeof(set1[0]);
    const int size2 = sizeof(set2) / sizeof(set2[0]);
    const int maxSize = size1 + size2;
    int unionSet[maxSize];

    for (int i = 0; i < size1; i++)
    {
        unionSet[i] = set1[i];
    }

    int unionSize = size1;

    for (int i = 0; i < size2; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < unionSize; j++)
        {
            if (set2[i] == unionSet[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            unionSet[unionSize] = set2[i];
            unionSize++;
        }
    }
    int a;

    std::cout << "Hasil gabungan: ";
    for (int i = 0; i < unionSize; i++)
    {
        for (int j = 0; j < unionSize - 1; j++)
        {
            if (unionSet[i] < unionSet[j])
            {                                                                                                                                                                                 
                a = unionSet[i];
                unionSet[i] = unionSet[j];
                unionSet[j] = a;
            }
        }
    }
    for (int i = 0; i < unionSize; i++)
    {
        std::cout << unionSet[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
