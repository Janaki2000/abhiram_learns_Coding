#include<stdio.h>
#include<string.h>

int main(){
    printf("Enter any 5 words!\n");
    char str[5][50],temp[50];
    for(int i=0;i<5;i++){
        printf("%d.",i+1);
        fgets(str[i], sizeof(str[i]), stdin);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(strcmp(str[i],str[j]) < 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("The words in dictionary order  are: \n");
    for(int i=0;i<5;i++){
        puts(str[i]);
    }
}