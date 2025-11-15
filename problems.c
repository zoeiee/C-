#include <stdio.h>
int main() {
    int num, d1, d2, d3, d4, sum;
    printf("Enter the number: ");
    scanf("%d", &num);
    d1 = num / 1000;
    d2 = (num / 100) % 10;;
    d3 = (num/10) % 10;
    d4 = num % 10;

    sum = d1 + d2 + d3 + d4;
    printf("Sum of digits is: %d\n", sum);
    return 0;

}

