#include <stdio.h>
int f(int n){
    if (n==1 || n==0){
        return 1;
    }
    else return n*f(n-1);
}

int main() {
    int n;
    printf("Enter the number=");
    scanf("%d",&n);
    int result =f(n);
    printf("Factorial of %d is = %d",n,result);
    return 0;
}