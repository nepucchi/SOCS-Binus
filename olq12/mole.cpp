#include <stdio.h>

void sort(int t2, int arr[]){
    for(int i = 0; i<t2; i++){
        for(int j = 0; j<t2-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int search(int key, int t, int arr[]){
    for(int i = 0; i<t; i++){
        if(key == arr[i]){
            return i;
        }
    }
    return -1; 
}

int linear(int angk,int tc,int arr[]){
    for(int i=0;i<tc;i++){
        if(arr[i]==angk){
            return i;
        }
    }
    return-1;
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        int t2;
        scanf("%d", &t2);
        int arr[t2];
        for(int j = 0; j<t2; j++){
            scanf("%d", &arr[j]);
        }
        int key;
        scanf("%d", &key);
        sort(t2, arr);
        int hasil = linear(key, t2, arr);
        if(hasil == t2-1) printf("CASE #%d: %d %d\n", i+1, arr[hasil-1], arr[hasil]);
        else if (hasil == -1) printf("CASE #%d: -1 -1\n",i+1);
        else printf("CASE #%d: %d %d\n", i+1, arr[hasil], arr[hasil+1]);
    }
}