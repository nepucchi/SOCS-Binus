#include <stdio.h>
int counter = 0;

int fib(int n){
    ++counter;
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n,t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        scanf("%d", &n);
        fib(n);
        printf("Case #%d: ", i+1);
        printf("%d\n", counter);
        counter = 0;
    }
}