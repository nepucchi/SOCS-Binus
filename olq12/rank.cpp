#include <stdio.h>
#include <string.h>

struct asiq{
    char name[100];
    int nilai;
};

int search(char key[], int t, asiq arr[]){
    int hasil = -1;
    for(int i = 0; i<t; i++){
        if(strcmp(key, arr[i].name) == 0){
            hasil = i;
            return hasil;
        }
    }
    return hasil; 
}

void sortnama(asiq arr[], int n){
    struct asiq temp;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1-i; j++){
            if(strcmp(arr[j].name, arr[j+1].name) > 0){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sortangka(asiq arr[], int n){
    struct asiq temp;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j].nilai<arr[j+1].nilai){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int t1,t2;
    char key[100];
    scanf("%d", &t1);
    for(int i = 0; i<t1; i++){
        scanf("%d", &t2); getchar();
        asiq yes[t2];   
        for(int j = 0; j<t2; j++){
            scanf("%[^#]#%d", &yes[j].name, &yes[j].nilai); getchar();
        }
        scanf("%s", &key);
        sortnama(yes, t2);
        sortangka(yes, t2); 
        int hasil = search(key,t2,yes);
        printf("Case #%d: %d\n", i+1, hasil+1);
    }
}