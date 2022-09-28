#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows in the pattern: ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}