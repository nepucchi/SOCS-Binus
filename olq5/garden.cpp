#include <stdio.h>

int main(){
	int x,y,t;
	int c,v,z;
	scanf("%d %d", &x, &y);
	int arr[x][y];
	for(int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		scanf("%d %d %d", &c, &v, &z);
		arr[c-1][v-1] = z;
	}
	for (int i = 0; i < x; i++){
		printf("%d", arr[i][0]);
		for (int j = 1; j < y; j++){
			printf(" %d", arr[i][j]);
		}
	printf("\n");
	}
}

