#include<stdio.h>

int lcm(int n,int m){

    int i,temp,min,max;
    // temp = n<m ? n:m;
    // m = n+m-temp;
    // n = temp;
    if(n<m){
        min= n;
        max =m;
    }
    else{
        min = m; 
        max = n;
    }

    for(int i=1;i<=min;i++){
        if((max*i)%min == 0){
            return max*i;
        }
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",lcm(a,b));
    return 0;
}