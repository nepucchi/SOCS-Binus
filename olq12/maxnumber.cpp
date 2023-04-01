#include <stdio.h>

void search(int key, int t, int arr[]){
    for(int i = 0; i<t; i++){
        if(key == arr[i]){
            arr[i] = -1;
        }
    }
}

int max(int arr[],int a){
    int temp = -1;
    for(int i = 0; i<a; i++){
        if(arr[i]>temp) temp = arr[i];
    }
    return temp;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int arr[a];
    int kur;
    for(int i = 0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<b; i++){
        scanf("%d", &kur);
        search(kur,a,arr);
    }
    // int max = -1;
    // for(int i = 0; i<a; i++){
    //     if(max < arr[i]) max = arr[i];
    // }
    int ma = max(arr,a);
    printf("Maximum number is %d\n", ma);
    return 0;
}