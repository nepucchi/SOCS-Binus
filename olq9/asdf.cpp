#include <stdio.h>

char board[110][110];
int counter = 0;
int a,b;

void pac(int x, int y) {
    if ((x < 0 || y < 0) || (x > a || y > b) || board[y][x] == '#' || board[y][x] == '1') return;
    if (board[y][x] == '*') counter++;
    board[y][x] = '1';
    pac(x - 1, y);
    pac(x, y + 1);
    pac(x + 1, y);
    pac(x, y - 1);
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        counter = 0;
        int awal1, awal2;
        scanf("%d %d", &a, &b);
        for (int j = 0; j < a; j++) {
            scanf("%s", &board[j]);
            for (int k = 0; k < b; k++) {
                if (board[j][k] == 'P') {
                    awal1 = j;
                    awal2 = k;
                }
            }
        }
        pac(awal1, awal2);
        printf("Case #%d: %d\n", i+1, counter);
    }
}