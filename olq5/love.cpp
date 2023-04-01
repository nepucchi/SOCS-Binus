#include <stdio.h>

int main (){
	int n,a,b;
	int update;
	scanf("%d",&n);
	int arr[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &update);
	for (int i = 0; i < update; i++){
		scanf("%d %d", &b, &a);
		arr[b-1] = a;
		printf("Case #%d:",i+1);
		for(int j = 0; j < n; j++){
			printf(" %d",arr[j]);
		}
	printf("\n");	
	}
	
	return 0;
}
