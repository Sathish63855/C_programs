#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,i,j;
	int first[10][10],second[10][10],sum[10][10];
	printf("\t\t\tAddition of Matrices \n ");
	printf("\nEnter the number of rows and columns of the matrix : \n");
	scanf("%d %d",&m,&n);
	printf("\nEnter the elements of first Matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&first[i][j]);}}
	printf("\nEnter the elements of Second Matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&second[i][j]);}}
	printf("\nSum of the Entered matrices\n ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum[i][j]=0;
			sum[i][j]=first[i][j]+second[i][j];
			printf("%d",&sum[i][j]);
		}
		printf("\n");
	}
	getch();
	
	
	
			
}