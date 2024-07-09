#include<stdio.h>

int main(){
    int arr[100];
    int visited[1000] = {0};
    int count;
    int i , j, n;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the Elements :\n");
    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for( i = 0; i < n; i++){
            
            count = 1;
        
            if( visited[arr[i]] == 0){

                for( j = i+1; j < n; j++){
                    if(arr[i] == arr[j]){
                            count++;

                    } 
                }
                
            }

        visited[arr[i]] = 1;

    }
    printf("The element %d occurs %d times.\n",arr[i],count );

}