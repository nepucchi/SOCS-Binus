#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("testdata.in", "r");
    int a,b;
    fscanf(ptr,"%d %d", &a,&b);
    printf("%d\n", a+b);
}