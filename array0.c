#include<stdio.h>
int main(){
    int a[100];
    int i,n;
    printf("Enter number of terms: \n");
    scanf("%d", &n);

    printf("Enter the numbers: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    printf("%d\n", a[i]);
    return 0;
}