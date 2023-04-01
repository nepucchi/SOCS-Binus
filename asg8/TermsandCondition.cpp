#include <stdio.h>

int main(){
    int t;
    int a,b,c;
    int diskon; 
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &a, &b, &c);
        diskon = (a*b)/100;
        if(diskon > c) printf("Case #%d: %d\n",i+1, c);
        else printf("Case #%d: %d\n",i+1, diskon);
    }
}