#include <stdio.h>

struct complex{
    int real;
    int imaginary;
}c1,c2,result;

void resultcomplex(struct complex c1,struct complex c2,struct complex result);


int main() {
    printf("Enter the real number of first complex number: ");
    scanf("%d",&c1.real);
    printf("Enter imaginary number of first complex number: ");
    scanf("%d",&c1.imaginary);
    
    printf("Enter the real number of second complex number: ");
    scanf("%d",&c2.real);
    printf("Enter imaginary number of second complex number: ");
    scanf("%d",&c2.imaginary);
    
    resultcomplex(c1,c2,result);
}

void resultcomplex(struct complex c1,struct complex c2,struct complex result){
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    printf("The resultant cmplex number is: %d + %di ",result.real,result.imaginary);
}