#include <stdio.h>

int search(int arr[], int t, int key){
    int hasil = -1;
    for(int i = 0; i<t; i++){
        if(key == arr[i]) hasil = i;
    }
    return -1;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int arr[a]; 
    for(int i = 0; i<a; i++){
        scanf("%d", &arr[a]);
    }
    for(int i = 0; i<a; i++){
        printf("%d", arr[i]);
    }
    return 0;
}