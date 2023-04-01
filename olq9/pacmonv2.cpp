#include <stdio.h>

char box[110][110];
int counter = 0;

void dfs(int x, int y, int xmax, int ymax){
    if(x>=xmax || y>=ymax || x<0 || y<0 || box[x][y] == '#') return;
    if(box[x][y] == '*') counter++;
    box[x][y] = '#';
    dfs(x-1,y,xmax,ymax);
    dfs(x,y+1,xmax,ymax);
    dfs(x+1,y,xmax,ymax);
    dfs(x,y-1,xmax,ymax);
}

int main(){
    int t;
    scanf("%d", &t);
    getchar();
    for(int i = 0; i<t; i++){
        counter = 0;
        int row,col;
        int start1,start2;
        scanf("%d %d", &row, &col);
        getchar();
        for(int j = 0; j<row; j++){
            for(int k = 0; k<col; k++){
                scanf("%c", &box[j][k]);
                if(box[j][k] == 'P'){
                    start1 = j;
                    start2 = k;
                } 
            }
            getchar();
        }
        dfs(start1,start2,row,col);
        printf("Case #%d: %d\n", i+1, counter);
    }
    return 0;
}