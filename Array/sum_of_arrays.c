#include<stdio.h>

void print_array(int sum);
void sum1(int arr[], int n, int sum);
void positive(int arr[], int n, int sum);
void negative(int arr[], int n, int sum);
void odd(int arr[], int n, int sum);
void even(int arr[], int n, int sum);
// void prime(int arr[], int n, int sum);


int main(){

    int i, j, n, opr, sum = 0;
    int arr[100];

    printf("Enter the number of elements : "); 
    scanf("%d", &n);
    
    printf("Enter the elements : \n");
    for( i = 0; i < n; i++){
        printf("A[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements are : ");
    for( i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nsum : 1 | positive : 2 | negative : 3 | odd : 4 | even : 5 \nEnter operation :  ");
    // | prime : 6
    scanf("%d", &opr);

    switch(opr)
    {
        case 1 :
            sum1(arr, n, sum);
            break;
        case 2 :
            positive(arr, n, sum);
            break;
        case 3 :
            negative(arr, n, sum);
            break;
        case 4 :
            odd(arr, n, sum);
            break;
        case 5 :
            even(arr, n, sum);
            break;
        // case 6 :
        //     prime(arr, n, sum);
        //     break;
    }

    return 0;
}

// Print_array Function
void print_array(int sum)
{
    printf("The Sum is %d",sum);

}

void sum1(int arr[], int n, int sum){
    for( int i = 0; i < n; i++){
        sum += arr[i];
    }
    print_array(sum);        
}
void positive(int arr[], int n, int sum)
{
    for( int i = 0; i < n; i++){
        if( arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    print_array(sum);  
}
void negative(int arr[], int n, int sum){
    for( int i = 0; i < n; i++){
        if( arr[i] < 0)
        {
            sum += arr[i];
        }
    }
    print_array(sum);  
}
void odd(int arr[], int n, int sum){
    for( int i = 0; i < n; i++){
        if( arr[i]%2 != 0)
        {
            sum += arr[i];
        }
    }
    print_array(sum);  
}
void even(int arr[], int n, int sum){
    for( int i = 0; i < n; i++){
        if( arr[i]%2 == 0)
        {
            sum += arr[i];
        }
    }
    print_array(sum);  
  
}
// void prime(int arr[], int n, int sum){
//     for( int i = 0; i < n; i++){
//         if( arr[i] )
//         {
//             sum += arr[i];
//         }
//     }  
// }
