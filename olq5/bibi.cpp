#include <stdio.h>

int main (){
	int t;
	scanf("%d", &t);
	for (int i=0; i<t; i++){
		long long int a;
		scanf("%lld", &a);
		int arr[a];
		int count = 1;
		int maxcount = 1;
		int modus = 0;
		int arraymode[20000];
		for (int j=0; j<a; j++){
			scanf("%d", &arr[j]);
		}
			for (int j=0; j<a; j++){
			if (arr[j] == arr[j+1]){
					count++;	
				}
				else {
					if (count>maxcount){
				   	maxcount = count;
					   	if (maxcount > 1){
						arraymode[modus] = arr[j];
						modus++;
						}	
					}
				count = 1;
				}
			}
		printf("Case #%d: %d\n", i+1, maxcount);
//		printf("%d", arraymode[0]);
//		for (int i=1; i<modus; i++){
//			printf(" %d", arraymode[i]);
//		}
		for (int i=0; i<modus; i++){
			int temp;
			for (int j=i+1; j<modus; j++){
				if (arraymode[i]>arraymode[j]){
					temp = arraymode[i];
					arraymode[i] = arraymode[j];
					arraymode[j] = temp;	
				}
			}
		}
		printf("%d", arraymode[0]);
		for (int i=1; i<modus; i++){
			printf(" %d", arraymode[i]);
		}		
		printf("\n");
	}
}
