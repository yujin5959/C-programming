#include <stdio.h>
 int main(){
    float a;
    printf("Please enter kilometers: ");
    scanf("%f",&a);
    printf("%.1f km is equal to %.1f miles",a,a/1.609);
    return 0;
 }