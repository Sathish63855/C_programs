#include<stdio.h>

int convert(int n,int opr){
    
    int i = 0,a[50],d = n;

    // for( i = 0; n != 0; i++){
    //     a[i] = n%opr;
    //     n /= opr;
    // }

    while(n != 0){
        a[i] = n%opr;
        n /= opr;
        i++;
    }

    printf("The Converted value of %d : ", d);
    for( i = i-1; i >= 0; i--){
        printf(" %d ", a[i]);
    }
}

int main(){
    
    int n,opr;
    
    printf("Enter the number : "); scanf("%d",&n);
    printf("\nBinary : 1 | Octal : 2 | Hexadecimal : 3 \n");
    printf("Enter the Operation Number : ");
    scanf("%d",&opr);

    if( (opr > 0) && (opr <= 3)){
        switch(opr){
            case 1:
                opr = 2;
                break;
            case 2:
                opr = 8;
                break;
            case 3:
                opr = 16;
                break;
        }
        convert(n,opr);
    }
    else{
        printf("Enter the value between 1 to 3!!!");
    }
    return 0;
}