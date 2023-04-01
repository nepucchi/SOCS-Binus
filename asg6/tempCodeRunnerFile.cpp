#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        int counter;
        int maxcount = 0; 
        int min = 1000000000;
        int arr[n];
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[j]); //for loop buat input array
        }
        
        for (int j = 0; j < n; j++){
            counter = 1;
            for (int k = j+1; k <= n; k++){
                if (arr[j] == arr[k]){
                    counter++;//for loop buat cek tiap index array apakah sama dengan index lainnya
                }
            }
            if (counter > maxcount){
                maxcount = counter;// kalo index diatas counternya > maxcount, maka akan disimpan di maxcount
            }
        }

        for (int j = 0; j < n; j++){
            counter = 1;
            for (int k = j+1; k < n; k++){
                if (arr[j] == arr[k]){
                    counter++;
                }
            }
            if (counter == maxcount && arr[j] < min){
                min = arr[j];//kalo di loop nemu angka yang memenuhi 2 syarat ini, maka akan disimpan sebagai integer min
            }
        }
        printf("Case #%d: %d\n%d\n", i+1, maxcount, min );
        
    }
    return 0;
}