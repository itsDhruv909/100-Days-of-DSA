/*
Problem: Given a matrix, calculate the sum of its primary diagonal elements.
The primary diagonal consists of elements where row index equals column index.
*/

#include <stdio.h>
int main(){
    int n,s=0;
    printf("Enter the rows/columns of array\n");
    scanf("%d",&n);

    int arr[n][n];

    printf("enter the elements of the array:\n ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(i==j){
            s+=arr[i][j];
            }
        }
    }
    printf("%d is the sum", s);
    return 0;
}