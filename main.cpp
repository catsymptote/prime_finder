#include <iostream>
#include "prime.h"

int main()
{
    prime PFind;
    long long num = 7;

    if (PFind.is_prime(num))
        std::cout << num << " is a prime!" << std::endl;
    else
        std::cout << num << " is not prime!" << std::endl;

    return 0;
}
