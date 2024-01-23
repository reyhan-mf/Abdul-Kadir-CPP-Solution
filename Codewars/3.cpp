#include <iostream>
#include <string>
using namespace std;

string cleanString(string name, int kar)
{
    string result;
    for (int i = 0; i < kar; i++)
    {
        char ch = name[i];
        if (ch == '#')
        {
            if (!result.empty())
            {
                result.pop_back(); // Remove the last character (backspace)
            }
        }
        else
        {
            result.push_back(ch);
        }
    }
    return result;
}

int main()
{
    int totalKar = 0;
    string kar = "###";
    for (int i = 0; i < kar.size(); i++)
    {

        totalKar++;
    }

    kar = cleanString(kar, totalKar);
    cout << kar << endl;
}
