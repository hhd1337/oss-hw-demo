#include <stdio.h>

int add(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int add_even(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    return sum;
}

int main(void) {
    printf("Open Source Software HW - version 4\n");
    printf("Sum 1..10 = %d\n", add(10));
    printf("Even sum 1..10 = %d\n", add_even(10));
    return 0;
}

