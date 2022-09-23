#include<stdio.h>
#include<string.h>

struct height {
    int feet;
    int inch;
}d1,d2,result;

int main(){
    printf("Enter the info of distance 1:-\n");
   printf("Enter the feet of distance(1): ");
   scanf("%d",&d1.feet);
   printf("Enter the inches of distance 1: ");
   scanf("%d",&d1.inch);
   
   printf("Enter the info of distance 2:- \n");
   printf("Enter the feet of distance(2): ");
   scanf("%d",&d2.feet);
   printf("Enter the number inches in distance 2: ");
   scanf("%d",&d2.inch);
   
   result.feet = d1.feet + d2.feet;
   result.inch=d1.inch + d2.inch;
   
   if(result.inch >= 12){
       result.inch = result.inch - 12;
       result.feet++;
   }
   printf("The resultant distance is %d.%d feet!",result.feet,result.inch);
 
}