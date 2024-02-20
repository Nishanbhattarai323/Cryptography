#include <stdio.h>

void encrypt(char message[], int key) {
    int i = 0;
    char ch;
    while (message[i] != '\0') {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' + key) % 26;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' + key) % 26;
        }

        message[i] = ch;
        i++;
    }
}

int main() {
    char message[100];
    int key=3;
    printf("Enter a message: ");
    gets(message);
    encrypt(message, key);
    printf("Encrypted message: %s\n", message);
    printf("------------Nishan Bhattarai-------------");
    printf("\n--------- Rollno:15 --------------");
    return 0;
}

