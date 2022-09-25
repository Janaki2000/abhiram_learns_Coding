#include <stdio.h>

struct complex{
    int hours;
    int minutes;
    int seconds;
}t1,t2,diff;

int main() {
    printf("Enter the intial time:-\n");
    printf("Enter the initial hour value: ");
    scanf("%d",&t1.hours);
    printf("Enter the initial minute value: ");
    scanf("%d",&t1.minutes);
    printf("Enter initial value of the seconds: ");
    scanf("%d",&t1.seconds);
    
    printf("Enter the final time:-\n");
    printf("Enter the final hour value: ");
    scanf("%d",&t2.hours);
    printf("Enter the final minute value: ");
    scanf("%d",&t2.minutes);
    printf("Enter final value of the seconds: ");
    scanf("%d",&t2.seconds);
    
    diff.hours = t2.hours - t1.hours;
    diff.minutes =t2.minutes - t1.minutes;
    diff.seconds = t2.seconds - t1.seconds;
    
    if(diff.hours < 0){
        diff.hours = diff.hours + (2 * -(diff.hours));
    }
    
    if(diff.minutes < 0){
        diff.minutes = diff.minutes + (2 * -(diff.minutes));
    }
    
    if(diff.seconds < 0){
        diff.seconds = diff.seconds + (2 * -(diff.seconds));
    }
    printf("\n");
    printf("The difference in time is: %d:%d:%d ",diff.hours,diff.minutes,diff.seconds);
}