// Write a program to Find longest word. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0;
    int maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char word[100];

    while(1) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
            len++;
        }
        else {
            word[j] = '\0';

            if(len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }

            len = 0;
            j = 0;

            if(str[i] == '\0' || str[i] == '\n')
                break;
        }

        i++;
    }

    printf("Longest Word = %s\n", longest);
    printf("Length = %d", maxLen);

    return 0;
}