#include <stdio.h>
#include <string.h>
int n;

struct asiq{
    char pel[100];
    int dl;
};

void sortnama(asiq arr[]){
    struct asiq temp;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1-i; j++){
            if(strcmp(arr[j].pel, arr[j+1].pel) > 0){
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
            if(arr[j].dl>arr[j+1].dl){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    scanf("%d", &n);
    getchar();
    struct asiq yes[n];
    for(int i = 0; i<n; i++){
        scanf("%s %d", &yes[i].pel, &yes[i].dl); 
    }
        getchar();
        sortnama(yes);
        sortangka(yes);
        // for(int j = 0; j<n; j++){
        //         if(yes[j].dl == yes[j+1].dl){
        //             struct asiq temp;
        //             if(strcmp(yes[j].pel,yes[j+1].pel) > 0){
        //                 temp = yes[j];
        //                 yes[j] = yes[j+1];
        //                 yes[j+1] = temp;
        //             }
        //         }
        for(int j  = 0; j<n; j++){
            printf("%s\n", yes[j].pel);
        }
}