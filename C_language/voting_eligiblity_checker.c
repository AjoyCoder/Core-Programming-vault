#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are %d years old. You are eligible to vote!\n", age);
    } else {
        printf("You are %d years old. You are not eligible to vote yet.\n", age);
    }

    return 0;
}
