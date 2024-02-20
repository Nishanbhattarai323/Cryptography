#include <stdio.h>
void encrypt(char message[], int key) {
    int i = 0;
    char ch;
    while (message[i] != '\0') {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ch + key;

            if (ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }

            message[i] = ch - 32; // Convert to capital letter
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + key;

            if (ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }

            message[i] = ch;
        }

        i++;
    }
}

int main() {
    char message[100];
    int key;
    printf("Enter a message: ");
    gets(message);
    printf("Enter shift(key) value: ");
    scanf("%d", &key);
    encrypt(message, key);
    printf("Encrypted message: %s\n", message);
    printf("------------Nishan Bhattarai-------------");
    printf("\n--------- Rollno:15--------------");
    return 0;
}
