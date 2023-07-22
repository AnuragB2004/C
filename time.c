#include<stdio.h>
int main()
{
    int Hour1,Min1,Sec1,Hour2,Min2,Sec2,T1,T2,T;
    printf("Enter Hour1,Min1,Sec1,Hour2,Min2,Sec2");
    scanf("%d%d%d%d%d%d",&Hour1,&Min1,&Sec1,&Hour2,&Min2,&Sec2);
    T1=Hour1*3600+Min1*60+Sec1;
    T2=Hour2*3600+Min2*60+Sec2;
    T=T1-T2;
   int Hour=T/3600;
   int Min=(T%3600)/60;
   int Sec= (T%3600)%60;
   printf("Time is %d:%d:%d",Hour,Min,Sec);
   return 0;

}