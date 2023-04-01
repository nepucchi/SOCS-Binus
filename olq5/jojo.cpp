#include <stdio.h>

int main(){
	int t,a;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		scanf("%d", &a);
		long long int arr[a];
		int temp = 0;
		long long int sum = 0;
		for(int j = 0; j < a; j++){
			scanf("%lld", &arr[j]);
			sum += arr[j];
		}
		for (int k = 0; k < a; k++){
			if(arr[k]>sum){
				temp++;
			}
		}
	printf("Case #%d: %lld\n%d\n", i+1, sum, temp);
	}
}

