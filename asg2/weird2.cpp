#include <stdio.h>

int main(){
	int n,k;
	scanf("%d", &n);
	for (int x = 0; x < n; x++){
			scanf("%d", &k);
			if (k%2==1){
			for (int y = 1; y <= k; y++){
				for (int z = 1; z<=k; z++){
					if(y == 1 || y == k ||  z == 1 || z == k || z == y || z >= k-y+1){
					printf("*");
					}
					else printf(" ");
				}
				printf("\n");
			}
		printf("\n");
		}
		else printf("\n");
	}
	
}
