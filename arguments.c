#include<stdio.h>
void birthday(char name[], int age)
{
    printf("\nHappy Birthday Dear %s", name);
    printf("\nYou are %d years old", age);
}
int main(){
    char name[] = "Anurag";
    int age = 18;

    birthday(name, age);
    return 0;
}