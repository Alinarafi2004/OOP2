#include<iostream>
#include "CharString.h"
using namespace std;
int CharString::findSize(const char * src){
int i = 0;
while (src[i] != '\0')
{
    i++;
    return i;
}
}
