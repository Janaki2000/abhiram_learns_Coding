#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

    FILE *fptr;
    fptr = fopen("t.txt", "w");

    
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
}