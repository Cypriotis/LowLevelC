#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int *a=malloc(sizeof(int*)*8);
    int first=9,second=15,third=0,fourth=64,fifth=30,sixth=0,seventh=91,eight=32;
   
    a=&eight;

    int result,counter=256,s0=0;

    Loop:
        if (!(s0<8)) goto Exit;
         result=result+*a*counter;
         counter=counter/2;
          ++a;
          s0++;
        goto Loop;
    Exit:

    printf("Result: %d",result);

    return 0;
}