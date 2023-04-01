#include <stdio.h>
int tc1;
void sort(int arr[]){
    for(int i = 0; i < tc1; i++){
        for(int j = 0; j < tc1-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
};
int main (){
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++){
        scanf("%d", &tc1);
        int arr[tc1];
        for(int j = 0; j < tc1; j++){
            scanf("%d", &arr[j]);
        }
        sort(arr);
        int max = 0;
        for(int j = 0; j < (tc1-1)/2; j++){
            int hitung = arr[j]-arr[j+1];
            if(hitung < 0){
                hitung *= -1;
            }
            if(max < hitung){
                max = hitung;
            }
        }
        for(int j = tc1/2; j < tc1-1; j++){
            int hitung = arr[j]-arr[j+1];
            if(hitung < 0){
                hitung *= -1;
            }
            if(max < hitung){
                max = hitung;
            }
        }

        printf("Case #%d: %d\n",i, max);
    }
    return 0;
}