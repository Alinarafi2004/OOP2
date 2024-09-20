#include<iostream>
#include "CharString.h"
using namespace std;

CharString::CharString(){
    const char* cstr = "";
     size = -1;
}

CharString::CharString(const char* src){
    int sizeOfSrc=0;
    while (src[sizeOfSrc = '\0'])
    {
        sizeOfSrc++;
    }
    for (int i = 0; i < sizeOfSrc; i++)
    {
        cstr[i] = src[i];
    }
    size = sizeOfSrc;
    cstr[sizeOfSrc] = '\0';
    
}

CharString::CharString(const char* src, int n){
    int sizeOfSrc = 0;
    for (int i = 0; i < sizeOfSrc; i++)
    {
        cstr[i]=cstr[i];
    }
    cstr[size] = '\0';
}
void CharString::ShowString() const{
    cout<<cstr<<endl;
}
