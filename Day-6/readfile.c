#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

    FILE *fptr;
    fptr = fopen("t.txt", "r");

    
    if (fptr == NULL) {
    printf("Error!");
    exit(1);
    }
    char ch;
    for(int i=0;i < 100;i++){
    printf("%c",fgetc(fptr));
    }
    fclose(fptr);
}