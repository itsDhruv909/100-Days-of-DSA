/*
Problem: Given an array of integers, count the number of subarrays whose sum is equal to zero.
*/
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check all possible subarrays
    for(int i = 0; i < n; i++) {

        int sum = 0;   // reset sum for new starting point

        for(int j = i; j < n; j++) {
            sum = sum + arr[j];   // keep adding elements

            if(sum == 0) {        // if sum becomes 0
                count++;          // increase count
            }
        }
    }

    printf("Number of subarrays with sum 0: %d\n", count);

    return 0;
}