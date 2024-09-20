#ifndef CHAR_STRING_H
#define CHAR_STRING_H

class CharString
{
    private:
    char *cstr;
    int size;

    public:
    //constructors
    CharString();
    CharString(const char *src);
    CharString(const char *src,int n);

    //copy constructors
    CharString(const CharString &src);
    CharString(const CharString &src, int n);

    //other operations
    int GetSize( ) const;
    void ShowString() const;
    void Reset();
    void Cutdown(int n);
    //copy operations
    int findSize(const char * src);
    void CopyFrom(const char* src);
    char* CopyFrom(const char* src,int n,int start=0);
    void CopyFrom(const CharString& src);
    void CopyFrom(const CharString& src,int n,int start=0);

    //substring functions
    char* SubString(int n,int start=0);
    int FindSubstring(const char* str,int start=0)const;
    int FindSubstring(const CharString* str, int start=0) const; 

    //concatenate functions
    void Concat (const char* str);
    void Concat (const char* str,int n,int start=0);
    void append (const CharString& str);
     void append (const CharString& str,int n,int start=0);

};
#endif