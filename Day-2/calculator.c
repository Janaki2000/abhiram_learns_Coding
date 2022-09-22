#include<stdio.h>

int main(){
    int a;
    char x;
    int b;
    printf("Enter the operation to be performed: ");
    scanf("%c",&x);

    printf("Enter the value of 'a': ");
    scanf("%d",&a);
    
    printf("Enter the value of 'b': ");
    scanf("%d",&b);
    
    if (x == '+'){
        printf("The result is :%d",a + b);
    }
    else if(x == '-'){
        printf("The result is: %d",a - b);
    }
    else if (x == '/'){
        printf("The result is: %d",a / b);
    }
    else if(x == '*'){
        printf("The result is:%d", a * b);
    }
    return 0;
}