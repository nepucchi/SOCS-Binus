#include <stdio.h>

int fib(int a,int b, int c){
    if(a == 0) return b;
    else if (a == 1) return c;
    return fib(a-1,b,c) - fib(a-2,b,c);
}
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        long long a,b,c;
        scanf("%lld %lld %lld", &a,&b,&c);
        printf("Case #%d: %d\n", i+1, fib(a,b,c));
    }
}