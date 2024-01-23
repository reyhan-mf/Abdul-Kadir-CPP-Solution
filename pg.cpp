#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    int word = 0;
    string text;
    getline(cin, text);
    int length = text.size();
    bool punctuationSeen = false;

    char as = 'A';
    int val = as;
    cout << val;
}
