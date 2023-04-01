#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i =  0; i<t; i++){
        int a;
        scanf("%d", &a);
        int arr[a];
        int max = -1000;
        for(int i = 0; i<a; i++){
            scanf("%d", &arr[i]);
            if(arr[i] > max ) max = arr[i];
        }
        int counter = 0;
        for(int i = 0; i<a; i++){
            if(arr[i] >= max) counter++;
        }
        printf("Case #%d: %d\n", i+1, counter);
    }
}