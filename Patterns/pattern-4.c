#include<stdio.h>

int main(){
    char n;
    printf("Enter the alphabet of rows in the pattern: ");
    scanf("%c",&n);
    for(int row='A';row<=n;row++){
        for(int col='A';col<=row;col++){
            printf("%c ",row);
        }
        printf("\n");
    }
    return 0;
}