#ifndef BINLITERALS_H
#define BINLITERALS_H

#include <string>

constexpr int pow(int b, int e)
{
    return e > 0 ? b*pow(b, e-1) : 1;
}

constexpr int mystrlen(const char* s)
{
    return *s ? 1 + mystrlen(s+1) : 0;
}


constexpr unsigned int operator"" _b(const char* s)
{
    int a = 0;
    if(*s=='1')
    {
        a = 1 << (mystrlen(s)-1);  //исправлено
    }
    return *s ? a + operator"" _b(s + 1) : 0;
}

std::string operator"" _toBinStr(unsigned long long n);


#endif // BINLITERALS_H
