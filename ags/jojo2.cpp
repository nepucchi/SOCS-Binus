#include <stdio.h>

int main(){
    long int a,b,c,d,e,f,g,h,i,j,k,l,hasil1,hasil2,hasil3;
    scanf("(%ld+%ld)x(%ld-%ld)\n", &a,&b,&c,&d);
    scanf("(%ld+%ld)x(%ld-%ld)\n", &e,&f,&g,&h);
    scanf("(%ld+%ld)x(%ld-%ld)", &i,&j,&k,&l);
    hasil1=(a+b)*(c-d);
    hasil2=(e+f)*(g-h);
    hasil3=(i+j)*(k-l);
    printf("%ld %ld %ld\n",hasil1,hasil2,hasil3);
    return 0;


}
