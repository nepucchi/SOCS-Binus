#include <stdio.h>

void fib(int x, char y, char z){
    if(x == 0) printf("%c", y);
    else if (x == 1) printf("%c", z);
    else {
    fib(x-1,y,z);
    fib(x-2,y,z);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        int a;
        char b;
        char c;
        scanf("%d %c %c", &a, &b, &c);
        printf("Case #%d: ", i+1);
        fib(a,b,c);
        printf("\n");
    }
}