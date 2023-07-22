#include<stdio.h>
int main(){
    int a[10];
    int i,n;
    float sum, average;
    printf("Enter number of terms: \n");
    scanf("%d", &n);

    printf("Enter the marks: \n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1; i<=n; i++)
    {
        sum = sum + a[i];
        average = sum/n;
    }
    printf("The mean of entered numbers is: %f" ,average);
    return 0;
}