#include <stdio.h>
int n;
int arr[10000];
int counter = 0;

void sortangka(){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                counter++;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        int waktu;
        counter  = 0;
        scanf("%d %d", &n, &waktu);
        for(int j = 0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        sortangka();
        printf("Case #%d: %d\n",i+1, counter*waktu);
    }
}