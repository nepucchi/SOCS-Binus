#include <stdio.h>
#include <string.h>

int counter = 0;

struct asiq{
    char kota[1000];
    double suhu;
    char ay;
    double tempsuhu;
};

void sortangka(asiq arr[]){
    struct asiq temp;
    for(int i = 0; i<counter; i++){
        for(int j = 0; j<counter-1-i; j++){
            if(arr[j].tempsuhu>arr[j+1].tempsuhu){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sortnama(asiq arr[]){
    struct asiq temp;
    for(int i = 0; i < counter; i++){
        for(int j = 0; j < counter-1-i; j++){
            if(strcmp(arr[j].kota, arr[j+1].kota) < 0){
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
    counter = 0;
    while(fscanf(ptr, "%[^#]#%lf#%c\n",yes[counter].kota,&yes[counter].suhu,&yes[counter].ay) != EOF){
        if(yes[counter].ay == 'F') yes[counter].tempsuhu = (yes[counter].suhu-32)*5/9;
        else if(yes[counter].ay == 'C') yes[counter].tempsuhu = yes[counter].suhu;
        counter++;
    }
    fclose(ptr);
    sortnama(yes);
    sortangka(yes);
    for(int i = 0; i<counter; i++){
        printf("%s is %.2lf%c\n", yes[i].kota, yes[i].suhu, yes[i].ay);
    }

}