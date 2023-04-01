#include <stdio.h>
#include <string.h>
int idx = 0;

struct asiq{
    char judul[1000];
    char nama[1000];
    int view;
};

void sortnama(asiq arr[]){
    struct asiq temp;

    for(int i = 0; i < idx ; i++){
        for(int j = 0; j < idx-1-i; j++){
            if(strcmp(arr[j].judul, arr[j+1].judul) > 0){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sortangka(asiq arr[]){
    struct asiq temp;

    for(int i = 0; i<idx ; i++){
        for(int j = 0; j<idx-1-i; j++){
            if(arr[j].view<arr[j+1].view){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    struct asiq yes[100];
    FILE *ptr;
    ptr = fopen("testdata.in", "r");
    idx = 0;
    while(fscanf(ptr,"%[^#]#%[^#]#%d\n", &yes[idx].judul, &yes[idx].nama, &yes[idx].view) != EOF){
        idx++;
    }
    sortnama(yes);
    sortangka(yes);

    for(int i = 0; i<idx; i++){
        printf("%s by %s - %d\n", yes[i].judul, yes[i].nama, yes[i].view);
    }
}