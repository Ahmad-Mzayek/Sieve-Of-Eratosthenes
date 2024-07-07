#include <iostream>
#include "TextColors.hpp"
#include "SieveOfEratosthenes.hpp"

int main(void)
{
    const uint64_t upperLimit = 10000;
    std::cout << MAGENTA_BOLD "Primes Between 0 and " << upperLimit << " (Inclusive):" DEFAULT_COLOR << std::endl;
    try
    {
        const std::vector<uint64_t> primes = sieveOfEratosthenes(upperLimit);
        auto printPrimes = [](const std::vector<uint64_t>& primes) noexcept
            {
                if (primes.empty())
                {
                    std::cout << YELLOW_BOLD "{" RED_BOLD "/" YELLOW_BOLD "}." DEFAULT_COLOR << std::endl;
                    return;
                }
                std::cout << YELLOW_BOLD "{" BLUE_BOLD << primes[0] << DEFAULT_COLOR;
                const size_t nbElements = primes.size();
                for (size_t i = 1; i < nbElements; ++i)
                    std::cout << YELLOW_BOLD ", " BLUE_BOLD << primes[i] << DEFAULT_COLOR;
                std::cout << YELLOW_BOLD "}." DEFAULT_COLOR << std::endl;
            };
        printPrimes(primes);
        return EXIT_SUCCESS;
    }
    catch (const std::bad_alloc& memoryAllocationException)
    {
        std::cerr << RED_BOLD << memoryAllocationException.what() << DEFAULT_COLOR << std::endl;
        return EXIT_FAILURE;
    }
}
