#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long mod_exp(unsigned long long a, unsigned long long b, unsigned long long n) {
    unsigned long long result = 1;
    a = a % n;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % n;
        }
        b = b / 2;
        a = (a * a) % n;
    }
    return result;
}
int robin_miller(unsigned long long n, int k) {
    if (n == 2 || n == 3) return 1;
    if (n < 2 || n % 2 == 0) return 0;
    unsigned long long d = n - 1;
    int r = 0;
    while (d % 2 == 0) {
        r++;
        d /= 2;
    }
    int i,j;
    for (i = 0; i < k; i++) {
        unsigned long long a = rand() % (n - 3) + 2;
        unsigned long long x = mod_exp(a, d, n);
        if (x == 1 || x == n - 1) continue;
        for (j = 0; j < r - 1; j++) {
            x = mod_exp(x, 2, n);
            if (x == n - 1) break;
            if (x == 1) return 0;
        }

        if (x != n - 1) return 0;
    }
    return 1; 
}
int main() {
    unsigned long long num;
    int k;
    printf("Enter a number to test for primality: ");
    scanf("%llu", &num);
    printf("Enter the number of iterations (k): ");
    scanf("%d", &k);
    if (robin_miller(num, k)) {
        printf("%llu is probably prime.\n", num);
    } else {
        printf("%llu is composite.\n", num);
    }
     printf("\n------------Nishan Bhattarai-------------");
    printf("\n--------- Rollno:15 --------------");
    return 0;
}

