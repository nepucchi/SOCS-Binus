#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++){
        sum+=arr[i];
    }
    int min = 100001;
    for (int i = 0; i < n; i++){
        if (arr[i]<min && arr[i]%2 == 1){
            min = arr[i];
        }
    }
    if (sum%2 == 0){
        printf("%lld\n", sum);
    }
    else printf("%lld\n", sum-min);
    return 0;
}