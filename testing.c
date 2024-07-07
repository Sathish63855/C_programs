#include<stdio.h>
#include<stdlib.h>

int main(){

    int students,subjects;
    int **arr;
    int i,j;

    printf("Enter the number of Students : ");
    scanf("%d", &students);

    printf("Enter the number of Subjects : ");
    scanf("%d", &subjects);

    arr = (int **)malloc(students * sizeof(int *));
    if( arr == NULL){
        printf("Memory allocation failed !!!");
        return 1;
    }


    for( i = 0; i < students; i++){
        arr[i] = (int *)malloc(subjects * sizeof(int));
        if( arr[i] == NULL){
            printf("Memory allocation failed !!!");
            return 1;
        }
    }

    // for( i = 0; i < students; i++){
    //     for( j = 0; j < subjects; j++){
    //         arr[i][j] = i*subjects + j;
    //     }
    // }

    for( i = 0; i < students; i++){
        for( j = 0; j < subjects; j++){
            scanf("%d",arr[i][j]);
        }
    }

    for( i = 0; i < students; i++){
        for( j = 0; j < subjects; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    for( i = 0; i < students;i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}