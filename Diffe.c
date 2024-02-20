#include <stdio.h>
#include <math.h>

// Function to calculate (base^exponent) % modulus
int power(int base, int exponent, int modulus) {
    int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        base = (base * base) % modulus;
        exponent = exponent / 2;
    }
    return result;
}

int main() {
    int p, g, a, b; // public values: p, g, private values: a, b

    printf("Enter prime number (p): ");
    scanf("%d", &p);

    printf("Enter primitive root of %d (g): ", p);
    scanf("%d", &g);

    printf("Enter private key for Alice (a): ");
    scanf("%d", &a);

    printf("Enter private key for Bob (b): ");
    scanf("%d", &b);

    // Calculate public keys
    int A = power(g, a, p);
    int B = power(g, b, p);

    // Calculate secret keys
    int secret_key_alice = power(B, a, p);
    int secret_key_bob = power(A, b, p);

    printf("\nPublic keys exchanged over public channel:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    printf("\nSecret keys calculated independently:\n");
    printf("Secret key for Alice: %d\n", secret_key_alice);
    printf("Secret key for Bob: %d\n", secret_key_bob);
 printf("\n------------Nishan Bhattarai-------------");
    printf("\n--------- Rollno:15 --------------");
    return 0;
}
