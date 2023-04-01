#include <stdio.h>
#include <string.h>
struct asiq{
    char name[206];
};

int main(){
    struct asiq yes[209];
    int a,b;
    scanf("%d %d", &a,&b);
    for(int i =0 ; i<a; i++){
        scanf("%s", &yes[i].name);
    }
    
    char swap;
    for(int k=0; k< a; k++) {
        for (int i = 0; i < b; i++) {
             for (int j = i+1; j < b; ++j) {
                if (yes[k].name[i] > yes[k].name[j]){
                    swap = yes[k].name[i];
                    yes[k].name[i] = yes[k].name[j];
                    yes[k].name[j] = swap;
                }
            }
        } 
    }

    for(int i =0; i<a; i++){
        for(int j = i+1; j<a; j++){
            if(strcmp(yes[i].name,yes[j].name) < 0){
                asiq temp = yes[i];
                yes[i] = yes[j];
                yes[j] = temp;
            }
        }
    }
    
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            printf("%c", yes[i].name[j]);
        }
         printf("\n");
    }
}