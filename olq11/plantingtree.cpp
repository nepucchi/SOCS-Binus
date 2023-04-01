#include <stdio.h>
#include <string.h>


struct asiq{
    char fri[101];
    char tree[101];
};

int search(int t,char key[],asiq arr[]){
    int hasil = -1;
    for(int i = 0; i<t; i++){
        if(strcmp(key,arr[i].fri) == 0){
            hasil = i;
        }
    }
    return hasil;
}

int main(){
    int t;
    FILE *ptr;
    ptr = fopen("testdata.in", "r");
    fscanf(ptr,"%d\n", &t); 
    struct asiq yes[t];
    for(int i = 0; i<t; i++){
        fscanf(ptr,"%[^#]#%[^\n]\n", &yes[i].fri,&yes[i].tree);
    }
    int t1;
    char key[101];
    fscanf(ptr, "%d", &t1);
    for(int i = 0; i<t1; i++){
        fscanf(ptr,"%s", key);
        printf("Case #%d: ", i+1);
        int hasil = search(t,key,yes);
        if(hasil >= 0) printf("%s\n", yes[hasil].tree);
        else printf("N/A\n");
    }
}