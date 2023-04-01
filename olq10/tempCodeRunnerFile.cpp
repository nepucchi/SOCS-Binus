#include <stdio.h>
#include <string.h>

int t;
struct asiq{
    int angka;
    char nama[1000];
};

int main(){
    FILE *ptr;
    ptr = fopen("testdata.in", "r");
    fscanf(ptr,"%d", &t);
    struct asiq yes[t];
    for(int i = 0; i<t; i++){
        fscanf(ptr, "%d#%[^\n]", &yes[i].angka, &yes[i].nama);
    }
    // sortangka(yes);
    struct asiq temp;

        for(int j = 0; j<t-i; j++){
            if(strcmp(yes[j].nama,yes[j+1].nama) > 0){
                temp = yes[j];
                yes[j] = yes[j+1];
                yes[j+1] = temp;
            }
        }
    
    for(int i = 0; i<t; i++){
        printf("%d %s\n", yes[i].angka, yes[i].nama);
    }
}