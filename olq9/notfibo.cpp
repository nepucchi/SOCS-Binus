#include <stdio.h>

int fib(int n, int x, int y){
    int f[n+2];
    f[0] = x;
    f[1] = y;
    for(int i = 2; i<=n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main(){
    int a,b,n;
    scanf("%d %d", &a, &b);
    scanf("%d", &n);
    printf("%d\n", fib(n,a,b));
}