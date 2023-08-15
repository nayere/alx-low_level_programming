#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    int result = add(num1, num2);
    printf("The sum is: %d\n", result);
    
    return 0;
}
