#include<stdio.h>
int main(){
    char upr, lwr;
    int ascii;

    /*printf("Enter Uppercase letter: ");
    scanf("%c", &upr);
    ascii = upr + 32;
    printf("%c character in lower case is %c", upr, ascii);
    */
    printf("Enter lowercase letter: ");
    scanf("%c", &lwr);
    ascii = lwr - 32;
    printf("%c character in upper case is %c", lwr, ascii);
    
    return 0;
}