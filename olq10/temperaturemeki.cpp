#include<stdio.h>
#include<string.h>
int n;
struct suhukota{
    char kota[1001];
    float suhu;
    char suhunya;
    float tempsuhu;
};
void urutinnama(suhukota array[]){
struct suhukota temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(array[j].kota,array[j+1].kota)>0){
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void urutinsuhu(suhukota array[]){ //si skt gw declarenya array
    struct suhukota temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j].suhunya == 'F' || array[j].tempsuhu>array[j+1].tempsuhu){
                array[j].tempsuhu = (array[j].suhu-32)*5/9;
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp; 
            }
            else if(array[j].suhunya =='C' || array[j].tempsuhu>array[j+1].tempsuhu){
                array[j].tempsuhu = array[j].suhu;
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp; 
            }
        }
    }
}

int main(){
    n = 0;
    FILE *ptr;
    ptr = fopen("testdata.in","r");
    suhukota skt[100];
    while(fscanf(ptr,"%[^#]#%f#%c\n",&skt[n].kota,&skt[n].suhu,&skt[n].suhunya)!=EOF){
        n++;
    }
    urutinnama(skt);
    urutinsuhu(skt);
    for(int i=0;i<n;i++){
        printf("%s is %.2f%c\n",skt[i].kota,skt[i].suhu,skt[i].suhunya);
    }
    return 0;
}