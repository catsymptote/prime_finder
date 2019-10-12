#ifndef PRIME_H
#define PRIME_H

#include <vector>

class prime
{
    public:
        prime();
        virtual ~prime();
        long long find_by_index(int idx);
        bool is_prime(long long num);
        bool is_prime_basic(long long num);


        int test = 4;
        //std::vetctor<long long> find_factors(long long num);
        //std::vector<long long> find_prime_factors(long long num);

    protected:
    private:
};

#endif // PRIME_H
