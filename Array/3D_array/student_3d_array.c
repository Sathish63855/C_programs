#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int i,j,k,students,subjects,exams;
    int ***marks;

    // Get the students,subjects,exams
    printf("Enter the number of Students : ");
    scanf("%d",&students);
    printf("Enter the number of Subjects : ");
    scanf("%d",&subjects);
    printf("Enter the number of Exams : ");
    scanf("%d",&exams);

    // Allocate memory for marks 
    marks = (int ***)malloc( students * sizeof(int **));
    if( marks == NULL){
        printf("Memory allocation Failed");
        return 1;
    }

    // Allocate memory for each student's subject
    for( i = 0; i < students; i++){
        marks[i] = (int **)malloc( subjects * sizeof(int *));
        if( marks[i] == NULL){
            printf("Memory allocation Failed");
            return 1;
        }
        for( j = 0; j < subjects; j++){
            marks[i][j] = (int *)malloc(exams * sizeof(int));
            if( marks[i][j] == NULL){
                printf("Memory allocation Failed");
                return 1;
            }
        }
    }

    // Allocate memory for each subject's exams

    // Input the marks for each student in each subject for each eam
    for( i = 0; i < students; i++){
        for( j = 0; j < subjects; j++){
            for( k = 0; k < exams; k++){
                printf("Enter the marks of Student %d,subject %d, exam %d : ", i+1, j+1, k+1);
                scanf("%d",&marks[i][j][k]);
            }
        }
    }


    printf("\nStudents Marks : \n");
    for( i = 0 ; i < students; i++){
        printf("Student %d : \n",i+1);
        for( j = 0; j < subjects; j++){
            printf("Subject %d : ",j+1);
            for( k = 0; k < exams; k++){
                printf("%d ",marks[i][j][k]);
            }
            printf("\n");
        }
    }

    // Free allocated memory 
    for( i = 0; i < students; i++){
        for( j = 0; j < subjects; j++){
            free(marks[i][j]);
        }
        free(marks[i]);
    }
    free(marks);

    return 0;
}

