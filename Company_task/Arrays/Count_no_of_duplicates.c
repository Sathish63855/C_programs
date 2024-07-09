#include<stdio.h>


void getArray(int arr[],int n)
{
    for( int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
}


int max(int arr[], int n){

    int maxi =  arr[0];
    
    for(int i = 0; i < n; i++)
    {
        if( maxi < arr[i] )
        {
            maxi = arr[i];
        }
    }

    return maxi;
}


int countFrequency(int arr[], int n)
{
    int maximum  = max(arr, n);
    int freq[maximum+1];
    
    for(int i = 0; i <= maximum; i++)
    {
        freq[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    return countDuplicates(freq, maximum);
}


int countDuplicates(int freq[], int maximum)
{
    int count = 0;

    for( int i = 0; i <= maximum; i++)
    {
        if( freq[i] > 1)
        {
            count++;
        }
    }

    return count;
}

int main(){
    
    int n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int arr[n];
    getArray(arr, n);

    printf("\n Count of Duplicates %d ",countFrequency(arr,n));
}