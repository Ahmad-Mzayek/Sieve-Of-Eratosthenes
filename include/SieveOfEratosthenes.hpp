/*
    @headerfile     SieveOfEratosthenes.hpp
    @author         Ahmad Mzayek
    @date           Sunday, July 7th, 2024
    @brief          Defines functions related to prime computation.
*/

#ifndef __SIEVE_OF_ERATOSTHENES_HPP_
#define __SIEVE_OF_ERATOSTHENES_HPP_

#include <vector>
#include <cstdint>

/*
    @brief          Computes all primes between 0 and a given upper limit (inclusive) using the most efficient algorithm.
    @param          upperLimit: The upper limit for primes to be computed.
    @returns        `std::vector<uint64_t>`: The computed primes stored in a vector.
    @throws         `std::bad_alloc`: if memory allocation fails.
    @example        Call: const std::vector<uint64_t> primes = sieveOfEratosthenes(1); Returns: {};
    @example        Call: const std::vector<uint64_t> primes = sieveOfEratosthenes(20); Returns: {2, 3, 5, 7, 11, 13, 17, 19};
    @example        Call: const std::vector<uint64_t> primes = sieveOfEratosthenes(999999999999); Throws: `std::bad_alloc`
*/
std::vector<uint64_t> sieveOfEratosthenes(const uint64_t upperLimit);

#endif // __SIEVE_OF_ERATOSTHENES_HPP_