#include<stdio.h>
double square (double x)
{
    double result = x * x;
    return result;
}

int main(){
double x = square (4.0);
printf("%1f", x);
    return 0;
} 