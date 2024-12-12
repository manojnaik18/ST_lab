#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < 1 || a > 10 || b < 1 || b > 10 || c < 1 || c > 10) {
        printf("Out of range values\n");
        return 0;
    }

      
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c)
            printf("Equilateral triangle\n");
        else if (a != b && b != c && a != c)
            printf("Scalene triangle\n");
        else
            printf("Isosceles triangle\n");
    } else {
        printf("Triangle cannot be formed\n");
    }

    return 0;
}
