#include<stdio.h>
int main()
{
    char a[100], temp;
    int i=0, count =0, j;
    printf("Enter string: ");
    scanf("%s",&a);

    while(a[i] != 0)
    {
        count++;
        i++;
    }

    count=count-1;

    for(j=0;j<=count/2;j++)
    {
        temp=a[j];
        a[j]=a[count];
        a[count--]=temp;
    }

    printf("reverse of string is %s",a);
    return 0;
}