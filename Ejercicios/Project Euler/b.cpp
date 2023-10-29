#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int findNthPrime(int n) {
    if (n <= 0) {
        return 0; // Invalid input
    }

    int count = 0;
    int candidate = 2; // Start with the first prime number

    while (count < n) {
        if (isPrime(candidate)) {
            count++;
            if (count == n) {
                return candidate;
            }
        }
        candidate++;
    }

    return 0; // Should never reach here
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int nthPrime = findNthPrime(n);

    if (nthPrime != 0) {
        std::cout << "The " << n << "th prime number is: " << nthPrime << std::endl;
    } else {
        std::cout << "Invalid input or unable to find the prime." << std::endl;
    }

    return 0;
}