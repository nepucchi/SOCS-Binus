#include <stdio.h>

// int hitung(int n){
//     if(n == 1) return n;
//     else if(n%2 != 0) return hitung(n/2);
//     else if(n%2 == 0) return hitung(n*3-1);
// }

int hitung(int x, int y){
    if(x == y || x == 1) return x;
    if(x%2 == 0) x/=2;
    else if(x%2 != 0 ) x = x*3+1;
    return (hitung(x,y));
};

int main(){
    int a,b,t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        scanf("%d %d",&a, &b);
        printf("Case #%d: ",i+1);
        if(hitung(a,b) == b) printf("YES\n");
        else printf("NO\n");
    }
}