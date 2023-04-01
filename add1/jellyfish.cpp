#include <stdio.h>

int main (){
	int n,q,a,b;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	getchar();
	scanf("%d", &q);
	for (int i = 0; i < q; i++){
		int sum = 0;
		scanf("%d %d", &a, &b);
		printf("Case #%d: ", i+1);
		for(int x = a-1; x < b; x++){
			sum += arr[x];
		}
		printf("%d\n", sum);
	}
	return 0;	
}
