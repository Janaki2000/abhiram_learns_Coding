#include<stdio.h>

int main(){
    char n;
    printf("Enter the number of rows in the pattern: ");
    scanf("%d",&n);
    for(int row=n;row>=1;row--){
        for(int col=1;col<=row;col++){
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}