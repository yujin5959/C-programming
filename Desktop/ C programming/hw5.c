#include<stdio.h> 
int change(int n){
    if(n>1) change(n/2);
    printf("%d",n%2);
}
int main(){
    int a;
    printf("Please enter a number:");
    scanf("%d",&a);
    change(a);
    return 0;
}
