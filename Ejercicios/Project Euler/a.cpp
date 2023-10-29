#include <iostream>
#include <cmath>

long long largestPrimeFactor(long long n) {
    long long largest = -1;

    // Check for and remove all the 2s from n
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    // After the above loop, n must be odd. So, we can start from 3 and increment by 2.
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    // If n is a prime greater than 2
    if (n > 2) {
        largest = n;
    }

    return largest;
}

int main() {
    long long n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    long long largestPrime = largestPrimeFactor(n);

    if (largestPrime == -1) {
        std::cout << "No prime factors found." << std::endl;
    } else {
        std::cout << "Largest prime factor is: " << largestPrime << std::endl;
    }

    return 0;
}