#include <stdio.h>

// int dx[] = {-1, 1, 2, 2, 1, -1, -2, -2};
// int dy[] = {2, 2, 1, -1, -2, -2, -1, 1};
int papan[8][8];

// bool valid(int x, int y){
//     if(x < 8 || x > 8 || y < 8 || y > 8) return false;
//     if(visited[x][y] == 1) return false;
//     return true;
// }
void dfs(int x, int y,int step){
    if(x<0 || x>=8 || y<0 || y>=8) return;
    if (step<papan[x][y]) papan[x][y] = step;
    else return;
    dfs(x+2,y+1,step+1);
    dfs(x+2,y-1,step+1);
    dfs(x+1,y+2,step+1);
    dfs(x+1,y-2,step+1);
    dfs(x-2,y+1,step+1);
    dfs(x-2,y-1,step+1);
    dfs(x-1,y+2,step+1);
    dfs(x-1,y-2,step+1);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        for(int j = 0; j<8; j++){
            for(int k = 0; k<8; k++){
                papan[j][k] = 10000;
            }
        }
        for(int j = 0; j<8; j++){
            for(int k = 0; k<8; k++){
                printf("%d ", papan[j][k]);
            }
            printf("\n");
        }
        char awal[3],akhir[3];
        scanf("%s %s", &awal, &akhir);
        int x,y,tx,ty;
        getchar();
        x = awal[0] - 64;
        y = awal[1] - 48;
        tx = akhir[0] - 64;
        ty = akhir[1] - 48;
        dfs(8-y, x-1, 0);
        for(int j = 0; j<8; j++){
            for(int k = 0; k<8; k++){
                printf("%d ", papan[j][k]);
            }
            printf("\n");
        }
        printf("Case #%d: %d\n", i+1, papan[8-ty][tx-1]);
    }    
}