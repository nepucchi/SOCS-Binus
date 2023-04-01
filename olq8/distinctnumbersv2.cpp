#include <stdio.h>
int counter[1000001] = {0};

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        for(int j=0; j<1000001; j++){
            counter[j] = 0;
        }
        int a;
        scanf("%d", &a);
        int arr[a];
        for(int j=0; j<a; j++){
            scanf("%d", &arr[j]);
            counter[arr[j]]++;
        }
        int max = arr[0];
        for(int j=0; j<a; j++){
            if(arr[j]>max) max = arr[j];
        }
        int result = 0;
        for(int j=0; j<=max; j++){
            if(counter[j]>0) result++; 
        }
        printf("Case #%d: %d\n", i+1, result);
    }

}