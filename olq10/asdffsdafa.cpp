#include <stdio.h>
#include <string.h>

struct Data{
    char name[55];
    int ID;
};

int tc1;

void sortName(Data arr[]){
    struct Data temp;
    
    for(int i = 0; i < tc1; i++){
        for(int j = 0; j < tc1-1-i; j++){
            if(strcmp(arr[j].name, arr[j+1].name) > 0){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sortNumber(Data arr[]){
    struct Data temp;
    for(int i = 0; i < tc1; i++){
        for(int j = 0; j < tc1-1-i; j++){
            if(arr[j].ID < arr[j+1].ID){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main (){
    int tc;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
        scanf("%d", &tc1); getchar();
        struct Data t[tc1];
        for(int j = 0; j < tc1; j++){
            scanf("%[^#]#%d", t[j].name, &t[j].ID);
            getchar();
        }
        sortName(t);
        sortNumber(t);
        printf("Case #%d:\n",i+1);
        for(int j = 0; j < tc1; j++){
            printf("%s - %d\n", t[j].name, t[j].ID);
        }
    }
    return 0;
}