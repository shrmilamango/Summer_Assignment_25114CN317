// Write a program to Find maximum occurring character.

#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    for(i = 0; i < 256; i++) {
        if(freq[i] > maxFreq && i != '\n') {
            maxFreq = freq[i];
            maxChar = i;
        }
    }

    printf("Maximum Occurring Character = %c\n", maxChar);
    printf("Frequency = %d", maxFreq);

    return 0;
}