#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int i,j,students,subjects;
    int **marks;
    int *totalmarks;

    printf("Enter the number of Students : ");
    scanf("%d",&students);
    printf("Enter the number of Subjects : ");
    scanf("%d",&subjects);

    marks = (int **)malloc( students * sizeof(int *));
    if( marks == NULL){
        printf("Memory allocation Failed");
        return 1;
    }

    for( i = 0; i < students; i++){
        marks[i] = (int *)malloc( subjects * sizeof(int));
        if( marks[i] == NULL){
            printf("Memory allocation Failed");
            return 1;
        }
    }

    totalmarks = (int *)malloc( students * sizeof(int));
    if( totalmarks == NULL){
        printf("Memory allocation Failed");
        return 1;
    }

    for( i = 0; i < students; i++){
        printf("Enter the marks of Student %d : \n",i+1);

        totalmarks[i] = 0;

        for( j = 0; j < subjects; j++){
            printf("Subject %d : ",j+1);
            scanf("%d", &marks[i][j]);
            totalmarks[i] += marks[i][j];
        }

    }

    for( i = 0 ; i < students; i++){

        printf("Student %d : ",i+1);

        for( j = 0; j < subjects; j++){
            printf("Subject %d : %d |",j+1,marks[i][j]);
        }

        printf("Total marks : %d",totalmarks[i]);
        printf("\n");
    }

    // Free allocated memory 
    for( i = 0; i < students; i++){
        free(marks[i]);
    }
    free(marks);
    free(totalmarks);

    return 0;

}
