#include <stdio.h>

char box[101][101];
int counter = 0;
int panjang, lebar;

void dfs(int awalx, int awaly){
    if((awalx>panjang || awaly>lebar) || (awalx<0 || awaly<0) || box[awalx][awaly] == '#'){
        return;
    }
    if(box[awalx][awaly] == '*'){ 
        counter++;
    }
    box[awalx][awaly] == '#';
    dfs(awalx-1,awaly);
    dfs(awalx,awaly+1);
    dfs(awalx+1,awaly);
    dfs(awalx,awaly-1);
}

int main(){
    int t;
    int awal1,awal2;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        counter = 0;
        scanf("%d %d", &panjang,&lebar);
        for(int j = 0; j<panjang; j++){
            for(int k = 0; k<lebar; k++){
                scanf("%c", &box[j][k]);
                if(box[j][k] == 'P'){
                    awal1 = j;
                    awal2 = k;
                }
            }
        }
        printf("%d %d", awal1,awal2);
        dfs(awal1,awal2);
        printf("%d", counter);
    }
}
