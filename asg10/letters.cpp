#include <stdio.h>
#include <string.h>


int main(){
    int a,b;
    scanf("%d %d", &a, &b); getchar();
    char arr[a][b];
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            scanf("%c", &arr[i][j]);
        }
        getchar();
    }
    int swap;
    char temp[100];

    for(int k=0; k< a; k++) {
        for (int i = 0; i < b; i++) {
             for (int j = i+1; j < b; ++j) {
                if (arr[k][i] > arr[k][j]){
                    swap = arr[k][i];
                    arr[k][i] = arr[k][j];
                    arr[k][j] = swap;
                }
            }
        } 
    }
    for(int i = 0; i<a; i++){
        for(int j = 0; j<a; j++){
            if(strcmp(arr[i],arr[j]) > 0){
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
    
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

}
