#include <stdio.h>
int search(int key, int t, int arr[]){
    int hasil = 0;
    for(int i = 0; i<t; i++){
        if(key == arr[i]){
            hasil++
            return hasil;
        }
    }
    return -1; 
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int a = 0;
    int b = 1;
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
        int hasil1 = search(a,n,arr);
        int hasil2 = search(b,n,arr);
        printf("%d %d", hasil1, hasil2);

}