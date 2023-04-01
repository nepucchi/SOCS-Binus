#include <stdio.h>

int main(){
	int t,a;
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		scanf("%d", &a);
		int arr[a];
		for (int j = 1; j <= a; j++){
			scanf("%d", &arr[j]);
		}
		printf("Case #%d: ", i+1);
		printf("%d", arr[a]);
		for (int k = a-1; k > 0; k--){
			printf(" %d", arr[k]);
		}
		printf("\n");
	}
}
