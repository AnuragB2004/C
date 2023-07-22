#include <stdio.h>

enum day { Sunday, Monday, Tuesday, Wednesday, Friday, Saturday };

int main() {
    enum day currentday = Saturday;
    
    printf("The current day is %d\n", currentday);
    
    return 0;
}