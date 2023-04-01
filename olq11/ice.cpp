#include<stdio.h>

int main(){
int t, n;
int arr[150], kel, luas;
FILE *file;
file = fopen("testdata.in", "r");
fscanf(file, "%d\n", &t);
    for(int i=1; i<=t; i++){
        luas = 0; kel = 0;
        fscanf(file, "%d\n", &n);
        for(int j=0; j<n; j++){
            fscanf(file, "%d", &arr[j]);
        }
    for(int k=0; k<n; k++){
        kel = kel + (8*arr[k] - (4*(arr[k]-1)));
        luas = luas + (4*arr[k]);
            if(k != n-1){
                if(arr[k] <= arr[k+1]){
                    kel=kel - (4*arr[k]);
                }
                else{
                    kel=kel - (4*arr[k+1]);
                }
            }
    }
    printf("Case #%d: %d %d\n", i, kel, luas);
    }
return 0;
}