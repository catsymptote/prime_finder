#include "prime.h"


prime::prime()
{
    //ctor
}

prime::~prime()
{
    //dtor
}


// Most basic (and slow) prime finder.
// Uses pure brute forcing.
bool prime::is_prime(long long num)
{
    // <inf, 1] are not primes.
    if(num < 2)
        return false;

    // Check if divisible by any number <1, num>.
    for(int i=num-1; i>1; i--)
        if(num%i == 0)
            return false;

    // If nothing else: it is prime.
    return true;
}
