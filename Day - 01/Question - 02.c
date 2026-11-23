/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*


#include <stdio.h>

int main(void) {
    int first, second;

    scanf("%d %d", &first, &second);

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n",
           first + second,
           first - second,
           first * second,
           first / second);

    return 0;
}
