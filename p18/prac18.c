#include <stdio.h>

int main() {
    printf("Name :- Darsheel shiroya\n");
    printf("IDno:- 25CE116\n\n");
    int num, limit, i;

    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);


    if (num <= 0) {
        printf("Invalid input! Please enter a positive number.\n");
        return 1;  
    }

    printf("Enter limit (e.g., 10, 20, 50): ");
    scanf("%d", &limit);

    if (limit <= 0) {
        printf("Invalid limit! Must be greater than 0.\n");
        return 1;
    }

    printf("\nMultiplication Table of %d (up to %d):\n", num, limit);
    for (i = 1; i <= limit; i++) {
        printf("%d × %d = %d\n", num, i, num * i);
    }

    return 0;
}