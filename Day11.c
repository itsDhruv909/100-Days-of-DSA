/*
Problem: Write a program to perform addition of two matrices having the same dimensions.
The sum of two matrices is obtained by adding corresponding elements of the matrices.
*/
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the dimensions of the both matrix in a x b form: \n");
    scanf("%d %d",&a,&b);

    int arr1[a][b];
    int arr2[a][b];
    int arr3[a][b];

    printf("Enter the elemeents of first matrix:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elemeents of second matrix:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ", arr3[i][j]);
        }
            printf("\n");
        
    }

    return 0;
    

}
