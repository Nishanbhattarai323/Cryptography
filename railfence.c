#include <stdio.h>
#include <string.h>

// Function to encrypt using Rail Fence cipher
void encryptRailFence(char message[], int rails) {
    int len = strlen(message);
    char railMatrix[rails][len];
         int i,j;
    // Initialize railMatrix with spaces
    for(i = 0; i < rails; i++) {
        for(j= 0; j < len; j++) {
            railMatrix[i][j] = ' ';
        }
    }

    int row = 0;
    int direction = 1;

    for(i = 0; i < len; i++) {
        railMatrix[row][i] = message[i];

        if(row == 0) {
            direction = 1;
        } else if(row == rails - 1) {
            direction = -1;
        }

        row += direction;
    }

    // Print the encrypted message in uppercase
    printf("Encrypted message: ");
    for(i = 0; i < rails; i++) {
        for( j = 0; j < len; j++) {
            if(railMatrix[i][j] != ' ' && railMatrix[i][j] != '\n') {
                printf("%c", toupper(railMatrix[i][j]));
            }
        }
    }
    printf("\n");
}

int main() {
    char message[100];
    int rails;

    printf("Enter the message to be encrypted: ");
    scanf("%[^\n]s", message);

    printf("Enter the number of rails: ");
    scanf("%d", &rails);

    encryptRailFence(message, rails);
printf("------------Nishan Bhattarai-------------");
    printf("\n--------- Rollno:15 --------------");
    return 0;
    
}
