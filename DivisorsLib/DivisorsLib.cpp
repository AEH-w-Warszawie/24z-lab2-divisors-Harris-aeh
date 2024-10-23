#include <vector>
#include "Divisors.h"
#include <cmath>

// Faster Algorithm 
std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> result;
    unsigned long long sqrt_n = std::sqrt(number); // calculate square root

    for (unsigned long long i = 1; i <= sqrt_n; ++i)
    {
        if (number % i == 0)
        {
            result.push_back(i);
            if (i != number / i)
            {
                result.push_back(number / i);
            }
        }
    }

    return result;
}