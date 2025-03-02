#include <stdio.h>

int main()
{
    // how to add two integers.
    int num1 = 1;
    int num2 = 2;

    int sum;
    sum = num1 + num2;
    printf("Value of sum is = %d\n", sum);

    int difference;
    difference = num1 - num2;
    printf("Difference value is = %d\n", difference);

    int product;
    product = num1 * num2;
    printf("product value is  = %d\n", product);

    float devide;
    devide = (float) num1 / (float) num2;
    printf("devision value is = %f\n", devide);

    return 0;
}