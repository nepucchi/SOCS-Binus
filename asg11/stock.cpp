#include <stdio.h>
#include <string.h>

struct asiq{
    char item[100];
    int amt;
};

int linearsearch(char key[], int total, asiq arr[]){
    int hasil = -1;
    for(int i = 0; i<total; i++){
        if(strcmp(key,arr[i].item) == 0){
            hasil = i;
            return hasil;
        }
    }
    return hasil;   
}

int main(){
    FILE *ptr = fopen("testdata.in", "r");
    int t1,t2;
    fscanf(ptr, "%d\n", &t1);
    for(int i = 0; i<t1; i++){
        fscanf(ptr, "%d\n", &t2);    
        int idx = 0;
        asiq tempitem;
        asiq yes[t2];
        char stat[100];
        for(int j = 0; j<t2; j++){
            fscanf(ptr, "%[^#]#%[^#]#%d\n", &stat, &tempitem.item, &tempitem.amt);
            int hasil = linearsearch(tempitem.item, idx, yes);
            if(hasil == -1){
                strcpy(yes[idx].item, tempitem.item);
                if(strcmp(stat, "sell") == 0){
                    yes[idx].amt =- tempitem.amt;
                } else if (strcmp(stat, "buy") == 0){
                    yes[idx].amt = tempitem.amt;
                }
                idx++;
            }
            else if(hasil != -1){
                if(strcmp(stat, "sell") == 0){
                    yes[hasil].amt -= tempitem.amt;
                }
                else if (strcmp(stat, "buy") == 0){
                    yes[hasil].amt += tempitem.amt;
                }
            }
        }
        printf("Case #%d:\n", i+1);
        int flag = 0;
        for(int j = 0; j<idx; j++){
            if(yes[j].amt < 0){
                printf("stock is not enough for product %s\n", yes[j].item);
                flag = 1;
            }
        }
        if(!flag){
            for(int j = 0; j<idx; j++){
                printf("%s - %d\n", yes[j].item, yes[j].amt);
            }
        }
    }
}


    