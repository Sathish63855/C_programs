#include<stdio.h>
#include<math.h>

int main(){
    double principal , rate, time , Amount, CI;

    printf("Enter Principal (Amount) : ");
    scanf("%lf", &principal);
    printf("Enter Time : ");
    scanf("%lf", &time);
    printf("Enter Rate : ");
    scanf("%lf", &rate);

    Amount = principal * (pow((1 + rate/100), time));
    CI = Amount  - principal;
    printf("Compund Interest is : %lf",CI);
    return 0;
}