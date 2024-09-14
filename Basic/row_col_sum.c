
#include <stdio.h> 
  
int main() 
{ 
    int rows ;
    printf("Enter the number of rows : ");
    scanf("%d",&rows); 
  
    for (int i = 0; i < rows; i++) { 
        
        for (int j = 1; j < rows - i; j++) { 
            printf("_"); 
        } 
  
        for (int k = 0; k  <  2 * i + 1; k++) { 
            printf("%d",k+1); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
