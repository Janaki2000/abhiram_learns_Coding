#include<stdio.h>
#include<string.h>

struct student {
    int rollnum;
    char name[100];
    float percentage;
};

int main(){
   struct student first;
   first.rollnum=1;
   strcpy(first.name,"Aa");
   first.percentage=9.6;
   
   printf("The roll number of the first student is: %d\n",first.rollnum);
   printf("The name of the first student is: %s\n",first.name);
   printf("The percentage of the first student is:  %f\n",first.percentage);
}