#include<stdio.h>

int main(){
    int len,i;
    int a[5] ={1,2,3,4,5};
    len = sizeof(a)/sizeof(a[0]);
    
    for(i=0;i<=len-1;i++){
        if(a[i]!=0){
            printf("%d\n",a[i]);
        }
    }
    return 0;
}