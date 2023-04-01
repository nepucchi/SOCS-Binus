#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        long long int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }

        int counter = 0;
        int min[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &min[i]);
            if(arr[i]<min[i]){
                counter++;
            }
        }

        printf("Case #%d: %d\n", i+1, counter);
    }
    return 0;
}