#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0. 
 */
int addIntegers(int a, int b) {
    int result;

    if (a >= 0) {
        if (b >= 0) {
            result = a + b;
        } else {
            result = a - (-b);
        }
    } else {
        if (b >= 0) {
            result = b - (-a);
        } else {
            result = -(a + b);
        }
    }

    return result;
}

int main() {
    int num1 = 5;
    int num2 = -3;

    int sum = addIntegers(num1, num2);

    printf("Sum: %d\n", sum);

    return 0;
}
