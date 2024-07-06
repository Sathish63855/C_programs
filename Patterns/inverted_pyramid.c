// #include <stdio.h>
// int main() {
//    int rows, i, j, space;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = rows; i >= 1; --i) {
//       for (space = 0; space < rows - i; ++space)
//          printf("  ");
//       for (j = i; j <= 2 * i - 1; ++j)
//          printf("* ");
//       for (j = 0; j < i - 1; ++j)
//          printf("* ");
//       printf("\n");
//    }
//    return 0;
// }



#include<stdio.h>

int main(){
   
   int i,j,k,n,num;
   
   printf("Enter the number of rows : ");
   scanf("%d",&n);

   // for( i = n; i > 0 ; i--){
   //    for( j = 0; j < n-i; j++){
   //       printf("  ");
   //    }

   //    for( k = 0; k < 2*i-1 ; k++){
   //       printf("* ");
   //    }

   //    printf("\n");
   // }
   

   // for( i = n; i > 0 ; i--){
   //    for( j = 0; j < n+i-1 ; j++){

   //       if( j < n-i){
   //          printf("  ");
   //       }
   //       else{
   //          printf("* ");
   //       }
   //    }
   //    printf("\n");      
   // }

   // for( i = 0; i < n ; i++){
   //    for( j = 0; j < n-i-1 ; j++){
   //       printf("  ");
   //    }
   //    for( k = 0; k < 2*i-1; k++){
   //       printf("%d ",k+1);
   //    }
   //    printf("\n");
   // }
   
   for( i = 0; i < n ; i++){
      for( j = 0; j < n+i ; j++){

         if( j < n-i-1){
            printf("  ");
         }
         else{
            printf("%d ",j+1);
         }
      }
      printf("\n");      
   }
}