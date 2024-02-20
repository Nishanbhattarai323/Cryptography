#include <stdio.h>
#include <string.h>

void encrypt(char message[], char keyword[]) {
    int i, j;
    int messageLength = strlen(message);
    int keywordLength = strlen(keyword);

    for(i = 0, j = 0; i < messageLength; ++i, ++j){
        if(j == keywordLength)
            j = 0;

        if(message[i] >= 'a' && message[i] <= 'z'){
            message[i] = ((message[i] - 'a' + keyword[j] - 'a') % 26) + 'A'; // Note the 'A' here
        }
        else if(message[i] >= 'A' && message[i] <= 'Z'){
            message[i] = ((message[i] - 'A' + keyword[j] - 'a') % 26) + 'A'; // Convert to uppercase
        }
    }
}

int main() {
    char message[100];
    char keyword[100];

    printf("Enter a message: ");
    gets(message);
    printf("Enter a keyword: ");
    gets(keyword);
    encrypt(message, keyword);
    printf("Encrypted message: %s\n", message);
printf("------------Nishan Bhattarai-------------");
    printf("\n--------- Rollno:15 --------------");
    return 0;
}
