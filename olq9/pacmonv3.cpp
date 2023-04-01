#include <stdio.h>

char board[101][101];
int counter = 0;
int panjang, lebar;

void dfs(int x, int y) {
    if((x < 0 || y < 0) || (x > lebar || y > panjang) || board[y][x] == '#'){
        return;
    }
    if(board[y][x] == '*'){
        counter++;
    }
    board[y][x] = '#';
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}

int main (){
    int t;
    scanf("%d", &t);
    for(int x = 0; x < t; x++){
        scanf("%d %d", &panjang, &lebar);
        int mulaix, mulaiy;
        counter  = 0;
        for(int i = 0; i < panjang; i++){
            scanf("%s", &board[i]);
            for(int j = 0; j < lebar; j++){
                if(board[i][j] == 'P'){
                    mulaix = i;
                    mulaiy = j;
                }
            }
        } 
        dfs(mulaix, mulaiy);
        printf("Case #%d: %d\n", x+1, counter);
    }

    return 0;
}