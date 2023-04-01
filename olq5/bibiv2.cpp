#include <stdio.h>

int main (){
	int t;
	scanf("%d", &t);
	for (int i=0; i<t; i++){
		int count[200000] = {0};
		int a;
		scanf("%d", &a);
		int arr[a];
		for(int j=0; j<a; j++){
			scanf("%d", &arr[j]);
			count[arr[j]]++;	
		}
		int max = arr[0];
		for (int j=0; j<a; j++){
			if (arr[j]>max){
				max = arr[j];
			}
		}
		int frekuensi = count[0];
		for (int j=0; j<=max; j++){
			if (count[j]>frekuensi){
				frekuensi=count[j];
			}
		}
		printf("Case #%d: %d\n", i+1, frekuensi);
		int status = 0;
		for (int j=0; j<=max; j++){
			if (status == 0 && count[j]==frekuensi){
				printf("%d", j);
				status = 1;
			}
			else if (count[j] == frekuensi){
				printf(" %d", j);
			}
		}
		printf("\n");		
	}
	return 0;	
}
