#include<stdio.h>
#include<limits.h>

int smallest(int arr[],int n);
int largest(int arr[],int n);



int main(){
    
    int arr[100];
    int n,i,j;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the Elements : ");
    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for( i = 0; i < n; i++){
        for( j = i+1; j < n-1; j++)
        if( arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[i] = temp;
        }
    }
    for( i = 0; i < n; i++){
        for( j = i+1; j < n-1; j++)
        if( arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[i] = temp;
        }
    }


    smallest( arr, n);
    largest( arr, n);
}

int smallest(int arr[],int n){
    int s1 = INT_MAX,s2 = INT_MAX;

    for(int i = 0; i < n; i++){
        if ( arr[i] < s1){
            
            s2 = s1;
            s1 = arr[i];
        }

        else if( s2 > arr[i] && arr[i] > s1){
            s2 = arr[i];
        }
    }

    printf("\nThe smallest element is %d ",s1);
    
}


int largest(int arr[],int n){
    int l1 = INT_MIN,l2 = INT_MIN;

    for(int i = 0; i < n; i++){
        if ( arr[i] > l1){
            
            l2 = l1;
            l1 = arr[i];
        }

        else if( l2 < arr[i] && arr[i] > l1){
            l2 = arr[i];
        }
    }
    printf("\nThe largest element is %d ", l1);
}