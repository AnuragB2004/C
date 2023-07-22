//take a number n from the user and output its cube
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n: \n");
    scanf("%d", &n);

    int cube = n*n*n;
    printf("Cube of the number n is: %d", cube);
    return 0;
}