//write a program to find the time difference b/w two times
// 5 hr 40 min 30 sec
// 3 hr 20 min 20 sec

#include<stdio.h>
int main(){
    int hrs, mins, secs;

    printf("Enter the first value in hour: \n");
    scanf("%d", &hrs);
    printf("Enter the first value in mins: \n");
    scanf("%d", &mins);
    printf("Enter the first value in secs: \n");
    scanf("%d", &secs);

    int hrs1, mins1, secs1;
    
    printf("Enter the second value in hour: \n");
    scanf("%d", &hrs1);
    printf("Enter the second value in mins: \n");
    scanf("%d", &mins1); 
    printf("Enter the value in secs: \n");
    scanf("%d", &secs1);

    int hr_diff;
    hr_diff = hrs - hrs1;

    int min_diff;
    min_diff = mins - mins1;

    int secs_diff;
    secs_diff = secs - secs1;

    printf("The difference in the given time is %d", hr_diff);
    printf(":");
    printf("%d", min_diff);
    printf(":");
    printf("%d", secs_diff);

    return 0;
}