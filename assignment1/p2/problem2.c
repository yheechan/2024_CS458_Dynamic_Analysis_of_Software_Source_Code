#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAXPRIMES 999999

void printPrimes(int n) {
    int curPrime;
    int numPrimes;
    bool isPrime;
    int primes[MAXPRIMES];

    // Initialize 2 into the list of primes.
    primes[0] = 2;
    numPrimes = 1;
    curPrime = 2;

    // while(numPrimes < n) {
    while(numPrimes < n) {
        curPrime++; // next number to consider...
        // curPrime += numPrimes;
        isPrime = true;
        // for (int i = 0; i <= numPrimes; i++) {
        for (int i = 0; i <= numPrimes-1; i++) {
            // for each previous prime.
            // if current prime is divisible by
            // any previous prime, then it's not prime.
            if (curPrime % primes[i] == 0) {
                isPrime = false;
                break; // out of loop through primes.
            }
        }

        if (isPrime) {
            // save the prime we found.
            primes[numPrimes] = curPrime;
            numPrimes++;
        }
    } // end while

    // print all the primes out.
    for (int i = 0; i < n; i++) {
        printf("Prime: %d\n", primes[i]);
    }
    // end printPrimes
}

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    printf("Printing first %d primes\n", n);
    printPrimes(n);
    return 0;
}