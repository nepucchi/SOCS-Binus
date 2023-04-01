#include <stdio.h>
#include <string.h>

int main(){
    long long int angka;
    int n;
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%lld %d", &angka, &n);
        int arr[33] = {0};
        for (int j = 0; angka>0; j++){
            arr[j] = angka%2;
            angka /= 2;
        }
        printf("%d\n", arr[n]);
    }
    return 0;
}