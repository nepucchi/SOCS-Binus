#include<stdio.h>
#include<string.h>

struct ngitung
{
    int angka;
    char nepu[1001];
};

int main(){
    int tc;
    scanf("%d",&tc);
    ngitung ini[tc];
    for(int i=0;i<tc;i++){
        scanf("%s %d",&ini[i].nepu,&ini[i].angka);getchar();
    }
    for(int i=0;i<tc;i++){
        for(int j=0;j<tc;j++){
            if(strcmp(ini[j].nepu,ini[j+1].nepu) > 0){
                ngitung temp = ini[j];
                ini [j]=ini[j+1];
                ini [j+1]=temp; 
            }
        }
    }

    for(int i=0;i<tc;i++){
        for(int j=0;j<tc;j++){
            if(ini[j].angka>ini[j+1].angka){
                ngitung temp = ini[j];
                ini [j]=ini[j+1];
                ini [j+1]=temp; 
            }
        }
    }

    for(int i=0;i<tc;i++){
        printf("%s\n",ini[i].nepu);
    }

return 0;
}