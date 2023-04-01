#include <stdio.h>

int liner(int arr[], int t, int key, int min, int max){
    for(int i = min; i<=max; i++){
        if(key == arr[i]) return i;
    }
    return -1;
}

int biner(int arr[], int n, int key){
    int low = 0;
    int high = n - 1;
    int hasil = -1;
    while (low <= high){
        int mid = (high+low)/2;
        if(key<arr[mid]) high = mid-1;
        else if (key>arr[mid]) low = mid+1;
        else if (key == arr[mid]){
            return liner(arr,n,key,low,high);
        }
    }
    return hasil;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int arr[a]; 
    for(int i = 0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    for(int i = 0; i<b; i++){
        scanf("%d", &key);
        int hasil = biner(arr,a,key);
        if (hasil == -1) printf("-1\n");
        else printf("%d\n", hasil+1);
    }
    return 0;
}