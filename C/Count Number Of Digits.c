// Program for Count the Number of Digit in C Program

#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
 
    if (n==0)
        printf("There is only 1 digit in your Number");
    else
    {
    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }

    printf("Number of digits: %d", count);
    }
    return 0;
}