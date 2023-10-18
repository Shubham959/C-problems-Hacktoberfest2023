//Write a C language program to print the first natural number and their sum.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("The first %d natural numbers are:\n", n);

        for (i = 1; i <= n; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("\nSum of the first %d natural numbers: %d\n", n, sum);
    }

    return 0;
}
