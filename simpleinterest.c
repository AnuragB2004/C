//WAP to calculate simple interest for a set of values representing principle, no of years, and rate of interest.
#include<stdio.h>
int main(){
    int principle, time, rate, SI;
    printf("Enter principle, time, rate: ");
    scanf("%d%d%d", &principle, &time, &rate);

    SI = (principle*rate*time)/100;
    printf("The SI is %d", SI);
    return 0;
}