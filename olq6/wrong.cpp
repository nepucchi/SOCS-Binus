#include <stdio.h>

int main(){
	int t,a;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		scanf("%d", &a);
		int awal[a];
		int akhir[a];
		for (int j = 0; j < a; j++){
			scanf("%d", &awal[j]);
		}
		for (int k = 0; k < a; k++){
			scanf("%d", &akhir[k]);
		}
		printf("Case #%d: ", i+1);
		printf("%d", awal[0] - akhir[0]);
		for (int l = 1; l < a; l++){
			printf(" %d", awal[l] - akhir[l]);
		}
		printf("\n");
		
	}
	
}
