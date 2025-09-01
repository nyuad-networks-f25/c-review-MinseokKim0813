#include <stdio.h>

void check_divisible(int number);


int main() {
    // Take a number from the user
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    check_divisible(number);
    return 0;
}



void check_divisible(int number) {
    if (number % 3 == 0) {
        printf("foo");
    }
    if (number % 5 == 0) {
        printf("bar");
    }
    printf("\n");
    
    return;
}