#include<stdio.h>
#include<math.h>

int main(){
    int a[20];
    printf("Enter ur name : ");
    // scanf("%[^\n]%*c",&a);
    // scanf("%[^\n]s",&a);
    scanf("%[^\n]%d",&a);
    // fgets(a,20,stdin);

    // printf("Your Name is %s",a);
    // printf("Your Name is    %s  ",a);
    for( int i = 0; i < 100 ; i++){
        printf("%d" ,a[i]);
    }


    // int dividend, divisor , remainder;
    
    // printf("Enter the Dividend and Divisor with space : ");
    // scanf("%d %d",&dividend ,&divisor );

    // remainder = fmod(dividend , divisor);

    // printf("The remainder of %d and %d is %d",dividend, divisor, remainder);
}