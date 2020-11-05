#include <string>
#include <binLiterals.h>

std::string operator"" _toBinStr(unsigned long long n)
{
    std::string result("");
    do
    {
        result = std::to_string(n % 2) + result;
        n = n / 2;
    } while (n > 0);

    return result;
}
