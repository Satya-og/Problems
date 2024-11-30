 #include <stdio.h>


int Prime(int num);

int main() {
    int num,r;

   
    printf("Enter a number: ");
    scanf("%d", &num);

   
   r=Prime(num);
   }

int Prime(int num) 
{
int r;
    if (num <= 1) {
        printf("it is not a prime");
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("it is not a prime");
        }
     else
    printf("it is a prime");
    }
    return r;
}

