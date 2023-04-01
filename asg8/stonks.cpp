#include <stdio.h>

int main(){
    int n;
    long long a;
    long long sum = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%lld", &a);
        if(a >0) sum += a;
        else sum = sum;
    }
    printf("%lld\n", sum);
}