#include <stdio.h>
#define size 20000000

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        int counter[size] = {0};
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int j  = 0; j < n; j++){
            scanf("%d", &arr[j]);
            counter[arr[j]]++;
        }

        int max = arr[0];
        for (int j = 1; j <= n; j++){
            if (arr[j]>max){
                max = arr[j];
            }
        }

        int freq = counter[0];
        for (int j = 1; j <= max; j++){
            if (counter[j]>freq){
                freq = counter[j];
            }
        }  
        printf("Case #%d: %d\n",i+1, freq);
        int status = 1;
        for (int j = 0; j < max; j++){
            if (status == 1 && freq == counter[j]){
                printf("%d\n", j);
                status = 0;
            }
        }          
    }
    return 0;
}