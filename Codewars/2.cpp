#include <iostream>
#include <string>
using namespace std;

string likes(const string name[], int person)
{
    int a;
    if (person == 0)
    {
        return "no one likes this";
    }
    else if (person == 1)
    {
        return name[0] + " likes this";
    }
    else if (person == 2)
    {
        return name[0] + " and " + name[1] + " like this";
    }
    else if (person == 3)
    {
        return name[0] + ", " + name[1] + " and " + name[2] + " like this";
    }
    else
    {

        return name[0] + ", " + name[1] + " and " + to_string(person - 2) + " other like this";
    }
}

int main()
{
    string name[100] = {"Peter", "Alex", "Jacob", "Mark"};
    cout << likes(name, 7) << endl;
}