/*
    @file           SieveOfEratosthenes.cpp
    @author         Ahmad Mzayek
    @date           Sunday, July 7th, 2024
    @brief          Implements the functions of the header file `SieveOfEratosthenes.hpp`.
*/

#include "SieveOfEratosthenes.hpp"

std::vector<uint64_t> sieveOfEratosthenes(const uint64_t upperLimit)
{
    if (upperLimit < 2)
        return {};
    std::vector<bool> isPrime(upperLimit + 1, true);
    isPrime[0] = isPrime[1] = false;
    std::vector<uint64_t> primes;
    for (uint64_t i = 2; i <= upperLimit; ++i)
    {
        if (!isPrime[i])
            continue;
        primes.push_back(i);
        for (uint64_t j = i * i; j <= upperLimit; j += i)   // All multiples of `i` are NOT prime, as they are divisible by `i`.
            isPrime[j] = false;
    }
    return primes;
}