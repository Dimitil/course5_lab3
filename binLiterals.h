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

constexpr int operator"" _b(const char* s)
{
    // return constexpr func(s, 0);
    int a = 0;
    if(*s=='1')
    {
        a = pow(2, mystrlen(s)-1);  //можно сдвигом побитовым
    }
    return *s ? a + operator"" _b(s + 1) : 0;
}

std::string operator"" _toBinStr(unsigned long long n);


#endif // BINLITERALS_H
