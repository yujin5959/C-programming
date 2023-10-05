#include<stdio.h>

int main() {
    int n, i;
    int cnt = 0;
    printf("Please enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("It is not a prime number.");
    } else {
        for(i = 2; i < n; i++) {
            if(n % i == 0) {
                cnt++;
            }
        }
        if(cnt == 0) {
            printf("It is a prime number.");
        } else {
            printf("It is not a prime number.");
        }
    }
    return 0;
}
