#include <iostream>
#include <string>
#include <stdbool.h>

bool valid_phone_number(char number[])
{
    int totKar = 0;
    for (int i = 0; number[i] != '\0'; i++)
    {
        totKar++;
    }
    if (totKar > 14)
    {
        return false;
    }
    else
    {
        if (number[0] == '\0')
        {
            return false;
        }

        if (!(number[0] == '(' && number[4] == ')' && number[5] == ' ' && number[9] == '-'))
        {
            return false;
        }
        if (!(number[1] >= '0' && number[1] <= '9'))
        {
            return false;
        }
        if (!(number[2] >= '0' && number[2] <= '9'))
        {
            return false;
        }
        if (!(number[3] >= '0' && number[3] <= '9'))
        {
            return false;
        }
        if (!(number[6] >= '0' && number[6] <= '9'))
        {
            return false;
        }
        if (!(number[7] >= '0' && number[7] <= '9'))
        {
            return false;
        }
        if (!(number[8] >= '0' && number[8] <= '9'))
        {
            return false;
        }
        if (!(number[10] >= '0' && number[10] <= '9'))
        {
            return false;
        }
        if (!(number[11] >= '0' && number[11] <= '9'))
        {
            return false;
        }
        if (!(number[12] >= '0' && number[12] <= '9'))
        {
            return false;
        }
        if (!(number[13] >= '0' && number[13] <= '9'))
        {
            return false;
        }
    }
    return true;
}

int main()
{

    char number[100] = {"(123) 456-7890"};
    std::cout << valid_phone_number(number);
}
