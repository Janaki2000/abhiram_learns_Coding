#include<stdio.h>
#include<math.h>

void bin();
void dec();

int main(){
int binary [50];
int n;
int decimal; 
printf("Enter the decimal form: ");
scanf("%d",&decimal);
    int i;
    for(i=0;decimal !=0;i++){
        n = decimal % 2;
        decimal = decimal / 2;
        binary[i]=n;
    }
    int l=i-1;
    for(n=0;n<=l/2;n++){
        int temp = binary[n];
        binary[n]=binary[l-n];
        binary[l-n]=temp;
    }
    for(int k=0;k<i;k++){
        printf("%d \t",binary[k]);
    }
}
