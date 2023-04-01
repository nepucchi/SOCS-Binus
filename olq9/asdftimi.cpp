#include <stdio.h>

char board[110][110];
int visited[110][110];
int count = 0;
int panjang, lebar;

void move(int tempx, int tempy) {
    if((tempx < 0 || tempy < 0) || (tempx > lebar || tempy > panjang) || board[tempy][tempx] == '#' || visited[tempy][tempx] == 1){
        return;
    }
    if(board[tempy][tempx] == '*'){
        count++;
    }
    visited[tempy][tempx] = 1;
    move(tempx+1, tempy);
    move(tempx-1, tempy);
    move(tempx, tempy+1);
    move(tempx, tempy-1);
}

int main (){
    int tc;
    scanf("%d", &tc);
    for(int x = 0; x < tc; x++){
        scanf("%d %d", &panjang, &lebar);
        int mulaix, mulaiy;
        count  = 0;
        for(int i = 0; i < panjang; i++){
            scanf("%s", &board[i]);
            for(int j = 0; j < lebar; j++){
                if(board[i][j] == 'P'){
                    mulaix = i;
                    mulaiy = j;
                }
            }
        } 
        move(mulaix, mulaiy);
        printf("Case #%d: %d\n", x+1, count);
    }

    return 0;
}