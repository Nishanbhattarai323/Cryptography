#include <stdio.h>

int areMultiplicativeInverses(int a, int b, int n) {
    return (a * b) % n == 1;
}

int main() {
    int a, b, n;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the modulus: ");
    scanf("%d", &n);

    if (areMultiplicativeInverses(a, b, n)) {
        printf("%d and %d are multiplicative inverses modulo %d.\n", a, b, n);
    } else {
        printf("%d and %d are not multiplicative inverses modulo %d.\n", a, b, n);
    }
printf("------------Nishan Bhattarai-------------");
    printf("\n--------- Rollno:15 --------------");
    return 0;
}
