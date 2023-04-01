#include<stdio.h>
#include<string.h>
struct anakkelas{
    char nama[20];
    int nilai;
};
void sortnama(int b,anakkelas data[]){
    for(int i=0;i<b;i++){
        for(int j=0;j<b-i-1;j++){
            if(strcmp(data[j].nama,data[j+1].nama)>0){
            struct anakkelas temp;
            temp=data[j];
            data[j]=data[j+1];
            data[j+1]=temp;    
            }
        }
    }
}

void sortnilai(int b,anakkelas data[]){
    for(int i=0;i<b;i++){
        for(int j=0;j<b-i-1;j++){
            if(data[j].nilai<data[j+1].nilai){
            struct anakkelas temp;
            temp=data[j];
            data[j]=data[j+1];
            data[j+1]=temp;    
            }
        }
    }
}
int ranking(int b,anakkelas data[],char namacari[]){
    int hasil = -1;
    for(int i=0;i<b;i++){
        if(strcmp(namacari,data[i].nama)==0){
            hasil=i;
        }
    }
    return hasil;
}

int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int b;
        scanf("%d",&b);getchar();
        anakkelas data[b];        
        for(int j=0;j<b;j++){
            scanf("%[^#]#%d",&data[j].nama,&data[j].nilai);getchar();            
        }
        char namacari[20];
        scanf("%s",&namacari);
        sortnama(b,data);            
        sortnilai(b,data);    
        int hasil = ranking(b,data,namacari);            
        printf("Case #%d: %d\n",i+1,hasil+1);        
    }
    return 0;
}