#include <stdio.h>

int phi(int n) {
    int result = n,p; // Initialize result as n
    // Consider all prime factors of n and subtract their multiples from result
    for ( p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }

    // If n has a prime factor greater than sqrt(n)
    if (n > 1)
     result -= result / n;
     return result;
}
int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n > 0) {
        int totient = phi(n);
        printf("Euler's Totient Function for %d is %d\n", n, totient);
    } else {
        printf("Please enter a positive integer.\n");
    }
printf("------------Nishan Bhattarai-------------");
    printf("\n--------- Rollno:15 --------------");
    return 0;
}
