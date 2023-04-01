#include <stdio.h>
#include <string.h>

int t;
struct asiq{
    int angka;
    char nama[1000];
};

void sortnama(asiq arr[]){
    struct asiq temp;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t-1-i; j++){
            if(strcmp(arr[j].nama, arr[j+1].nama) > 0){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    FILE *ptr;
    ptr = fopen("testdata.in", "r");
    fscanf(ptr,"%d", &t);
    struct asiq yes[t];
    for(int i = 0; i<t; i++){
        fscanf(ptr, "%d#%[^\n]", &yes[i].angka, &yes[i].nama);
    }
    sortnama(yes);
    for(int i = 0; i<t; i++){
        printf("%d %s\n", yes[i].angka, yes[i].nama);
    }
    fclose(ptr);
}