#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c;

    printf("Enter side a: \n");
    scanf("%f", &a);

    printf("Enter side b: \n");
    scanf("%f", &b);

    /*printf("Enter side c: \n");
    scanf("%d", c);*/

    c = sqrt(a*a + b*b);

    printf("hypotenuse of right triangle is: %f", c);

    return 0;
}
