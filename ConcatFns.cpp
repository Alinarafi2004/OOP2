#include <iostream>
#include "CharString.h"
using namespace std;

void CharString::Concat(const char *str)
{
    int sizeOfCstr = findSize(cstr);
    int sizeOfStr = findSize(str);
    int i = 0;
    int Len = sizeOfCstr + sizeOfStr;
    char *temp = new char[Len];
    while (i < sizeOfCstr)
    {
        temp[i] = cstr[i];
        i++;
    }
    int j = 0;
    while (j < sizeOfStr)
    {
        temp[i] = str[j];
        i++;
        j++;
    }
    temp[Len] = '\0';
}