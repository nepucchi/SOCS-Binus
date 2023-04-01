#include <stdio.h>

int main(){
	int n,k;
	scanf("%d %d", &n,  &k);
	
//loop pertama
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf("#");
		}
		printf("\n");
	}
	printf("\n");

//loop kedua, pake modulo. 
	for (int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i%k == 0){
				printf("#");
			}
			else printf(".");	
		}
	printf("\n");
	}
	printf("\n");

//loop ketiga, pake modulo, tanpa \n

	for (int i = 0; i < n; i++){
		for (int j = 1; j <= n; j++){
			if(j%k==0){
				printf("#");
			}
			else printf(".");
		}
	printf("\n");	
	}
}		

