#include <stdio.h>
int counter[1000001] = {0};

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i<t; i++){
        int a;
        int result = 0;
        scanf("%d", &a);
        int arr[a];
        for(int j = 0; j<1000001; j++){
            counter[j] = 0;
        }
        int max = arr[0];
        for (int j = 1; j <= a; j++){
            if (arr[j]>max){
                max = arr[j];
            }
        }
        for (int j = 0; j<a; j++){
            scanf("%d", &arr[j]);
            counter[arr[j]]++;
        }
        for(int j = 0; j<max; j++){
            if (counter[arr[j]] >0) result++;
        }
    printf("Case #%d: %d\n", i+1, result);
    }
}