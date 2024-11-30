#include <stdio.h>
int sumOfDigits(int);
int main() {
    int n,r;

   
    printf("Enter a number: ");
    scanf("%d", &n);
r=sumOfDigits(n);
printf("%d",r);
    
   
}

int sumOfDigits(int n) {
   
    if (n == 0) {
        return 0;
    }
    
    else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}



