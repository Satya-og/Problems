#include <stdio.h>
void add();
int main() {
    add();
    return 0;
}
void add() {
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
}
