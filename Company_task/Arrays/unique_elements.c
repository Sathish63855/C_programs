#include<stdio.h>

int main(){
    int i, j, n;
    int arr[100],c;

    printf("Enter n value : ");
    scanf("%d", &n);

    printf("Enter th eelements : ");
    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for( i = 0; i < n; i++){
        c = 0;
        for( j = 0; j < n; j++){

            if( i != j)
            {
                if( arr[i] == arr[j])
                {
                    c++;
                }
            }
        }
        if( c == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}