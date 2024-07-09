// C Program to calculate size of an array using loop
#include <stdio.h>

int arr_length(int arr[])
{
	int i;
	int count = 0;
	for(i=0; arr[i]!='\0'; i++)
	{
		count++;
	}
	return count;
}

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n;

	n = arr_length(arr);
	printf("Length of Array is: %d", n);

	return 0;
}

// This code is contributed by Susobhan Akhuli
