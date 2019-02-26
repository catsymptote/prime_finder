#include <iostream>
#include "prime.h"

int main()
{
    std::cout << "Hello world!" << std::endl;
    prime PFind;
    long long num = 8;

    if (PFind.is_prime(num))
        std::cout << num << " is a prime!" << std::endl;
    else
        std::cout << num << " is not prime!" << std::endl;

    return 0;
}
