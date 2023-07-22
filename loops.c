#include<stdio.h>
int main(){
    //for loop = repeats a section of code a limited amount of times
    
    /*
        for(int i = 1; i <=10; i++){            //OUTPUT --> testtesttesttesttesttesttesttesttesttest
        printf("test\n");
    }
    */
    /*
        for(int i = 1; i <= 10; i++){           //OUTPUT --> 12345678910
        printf("%d\n", i);
    }
    */
    /*
        for(int i = 1; i <=10; i+=2){           //OUTPUT --> 1 3 5 7 9
            printf("%d\n", i);
        }
    */
    /*
        for(int i = 1; i <= 10; i += 3){        //OUTPUT --> 1 4 7 10
            printf("%d\n", i);
        }
    */
    /*
        for(int i = 10; i >= 1; i --){          //OUTPUT --> 10987654321
            printf("%d\n", i);
        }
    */
    /*
        for(int i =10; i >= 1; i-=2){           //OUTPUT --> 10 8 6 4 2
            printf("%d\n", i);
        }
    */
        for(int i = 10; i >= 1; i -=3){         //OUTPUT --> 10 7 4 1
            printf("%d\n", i);
        }
        
        
        

    return 0;
}