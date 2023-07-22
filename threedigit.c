#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n>99 && n<1000)
    {
        printf("Entered number is three digit");
    }
    else if (n >= 10 && n < 100)
    {
        printf("Entered number is 2 digit");
    }
    else if (n<10)
    {
        printf("Entered number is 1 digit");
    }
    
    else{
        printf("Number is out of range");
    }
    
    return 0;
}