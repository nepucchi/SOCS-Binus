#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        int counter[200000] = {0};
        int a;
        scanf("%d", &a);
        int arr[a];
        for (int j = 0; j < a; j++){
            scanf("%d", &arr[j]);
            counter[arr[j]]++;
        }

        int max = arr[0];
        for (int j = 1; j <= a; j++){
            if (arr[j]>max){
                max = arr[j];
            }
        }

        int frekuensi = counter[0];
        for (int j = 1; j <= max; j++){
            if(counter[j]>frekuensi){
                frekuensi = counter[j];
            }
        }               
        printf("%d\n", frekuensi);
        int status = 1;
        for (int j = 0; j <= max; j++){
            if(status == 1 && counter[j] == frekuensi){
                printf("%d", j);
                status = 0;
            }
            else if (counter[j] == frekuensi){
                printf(" %d", j);
            }
        }
    }
    return 0;
}