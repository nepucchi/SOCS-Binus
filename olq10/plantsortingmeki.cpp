#include<stdio.h>
#include<string.h>

int a;
struct namaaing{
    char ngaran[41];
    int nim;
};

void urutkeun(namaaing array[]){
    struct namaaing temp;
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i-1;j++){
            if(strcmp(array[j].ngaran,array[j+1].ngaran)>0){
            temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
        }
    }
}

int main(){
    FILE *ptr;
    ptr = fopen("testdata.in","r");
    fscanf(ptr,"%d",&a);
    struct namaaing na[a];
    for(int i=0;i<a;i++){
        fscanf(ptr,"%d#%[^\n]",&na[i].nim,&na[i].ngaran);
    }
    
    for(int j=0;j<a;j++){
    urutkeun(na);
    printf("%d %s\n",na[j].nim,na[j].ngaran);    
    }
    return 0;
}