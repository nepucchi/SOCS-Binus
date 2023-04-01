#include <stdio.h>
#include <string.h>
struct asiq{
    char nama[100];
    char nim[11];
};

int search(char key[], int t, asiq arr[]){
    int hasil = -1;
    for(int i = 0; i<t; i++){
        if(strcmp(key, arr[i].nim) == 0){
            hasil = i;
            return hasil;
        }
    }
    return hasil;
}

int main(){
    FILE *ptr = fopen("testdata.in", "r");
    int t,t2;
    fscanf(ptr, "%d\n" ,&t);
    asiq yes[t];
    for(int i = 0; i<t; i++){
        fscanf(ptr, "%s %[^\n]\n", &yes[i].nim, &yes[i].nama);
    }
    fscanf(ptr, "%d\n", &t2);
    char key[11];
    for(int i = 0; i<t2; i++){
        fscanf(ptr, "%s\n", &key);
        int hasil = search(key,t,yes);
        printf("Case #%d: ",i+1 );
        if(hasil == -1){
            printf("N/A\n");
        }
        else printf("%s\n", yes[hasil].nama);
    }
}