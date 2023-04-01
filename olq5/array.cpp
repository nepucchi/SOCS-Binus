#include <stdio.h>

int main (){
	int n;
	scanf("%d", &n);
	int index[n];
	int value[n];
	for (int i = 0; i < n; i++){
		scanf("%d",&index[i]);
	}
	for (int i = 0; i < n; i++){
		scanf("%d",&value[index[i]]);
		}
	printf("%d",value[0]);	
	for (int i = 1; i < n; i++){
		printf(" %d",value[i]);
	}
	printf("\n");
	return 0;
}

