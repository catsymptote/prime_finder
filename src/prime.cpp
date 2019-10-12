#include "prime.h"

prime::prime(){}
prime::~prime(){}

// Most basic (and slow) prime finder.
// Uses pure brute forcing.
bool prime::is_prime(long long num)
{
    // <inf, 1] are not primes.
    if(num < 2)
        return false;

    if(num < 100000)
        return is_prime_basic(num);
}

bool prime::is_prime_basic(long long num)
{
    // Check if divisible by any number <1, num>.
    for(int i=num-1; i>1; i--)
        if(num%i == 0)
            return false;

    // If nothing else: it is prime.
    return true;
}
