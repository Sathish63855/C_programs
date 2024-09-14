#include<stdio.h>


int getMax(int* arr,int size){
	int max = arr[0],i;
	for(i=0;i<size;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int arr[10],n,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("n is fetched\nNow enter the elements\n");

	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	printf("Largest number : %d",getMax(arr,n));
}