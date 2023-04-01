#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        int a;
        scanf("%d", &a);
        int arr[a],arr1[a],arr2[a];
        for(int j = 0; j<a; j++){
            scanf("%d", &arr[j]);
        }
        //buat sorting
        int temp = 0;
        for(int x = 0; x<a; x++){
            for(int y = x+1; y<a; y++){
                if(arr[x] > arr[y]){
                    temp = arr[x];
                    arr[x] = arr[y];
                    arr[y] = temp;
                }
            }
        }
        //buat misahin
        for(int x = 0; x<a/2; x++){
            arr1[x] = arr[x]; 
        }
        for(int x = a/2; x<a; x++){
            arr2[x] = arr[x];
        }
        //buat nyari perbedaan dif
        int dif = 0;
        for(int x = 0; x<a/2-1; x++){
                    if((arr1[x+1] - arr1[x]) > dif) dif = (arr1[x+1] - arr1[x]);
        }
        for(int x = a/2; x<a-1; x++){
                    if((arr2[x+1] - arr2[x]) > dif) dif = (arr2[x+1] - arr2[x]);
        }
        printf("Case #%d: %d",i+1, dif);
        printf("\n");
    }
}