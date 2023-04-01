#include <stdio.h>

int main(){
	int t,a;
	scanf("%d", &t);
	int sum = 0;
	for(int i = 0; i < t; i++){
		scanf("%d", &a);
		long long int arr [a][a];
		for (int j = 0; j < a; j++){
			for (int k = 0; k < a; k++){
				scanf("%lld", &arr[j][k]);
			}
		}
		printf("Case #%d:", i+1);
		for (int j = 0; j < a; j++){
		long long sum = 0;
			for (int k = 0; k < a; k++){
				sum += arr[k][j];
			}
		printf(" %lld", sum);
		}
	printf("\n");
	}
	return 0;
}
