#include <cstdio>

int SUMA(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int num3 = 65;

    int result = SUMA(num1, num2, num3);

    printf("The sum is: %d\n", result);

    return 0;
}
