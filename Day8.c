/*
Problem: Given integers a and b, compute a^b using recursion without using pow() function.
*/

#include <stdio.h>

// Recursive function to compute a^b
long long power(int a, int b) {
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("%lld", power(a, b));

    return 0;
}
