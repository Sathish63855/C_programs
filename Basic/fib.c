#include<stdio.h>
int main()
{
    int num = 1;
    loop:
    if(num <= 10){
        goto print1;
    }
    else{
        goto stop;
    }


    print1:
    printf("%d",num);
    num++;
    goto loop;
    
    stop:
    return 0;

}