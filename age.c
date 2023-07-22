#include<stdio.h>
int main(){
    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are eligible for driving liscence");
    }
    else if (age < 0){
        printf("You aren't born yet");
    }
    else{
        printf("You aren't eligible");
    }
    return 0;
}