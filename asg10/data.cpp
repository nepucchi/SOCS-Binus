#include <stdio.h>
#include <string.h>

struct asiq{
    char nama[69];
    int angka;
};

int n;

void sortnama(asiq arr[]){
    struct asiq temp;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1-i; j++){
            if(strcmp(arr[j].nama, arr[j+1].nama) > 0){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sortangka(asiq arr[]){
    struct asiq temp;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j].angka>arr[j+1].angka){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



int main(){
    int t;
    scanf("%d", &t);
    for(int x = 0; x<t; x++){
        scanf("%d", &n);getchar();
        struct asiq yes[n];
        for(int i = 0; i<n; i++){
            scanf("%[^#]#%d", yes[i].nama, &yes[i].angka);
            getchar();
        }
        sortnama(yes);
        sortangka(yes);
        printf("Case #%d:\n",x+1);
        for(int i = 0; i<n; i++){
            printf("%s - %d\n", yes[i].nama, yes[i].angka);
        }
    }

    return 0;
}