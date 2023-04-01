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
					if (count>=maxcount){
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
		for (int j=0; j<modus; j++){
			int temp;
			for (int k=j+1; k<modus; k++){
				if (arraymode[j]>arraymode[k]){
					temp = arraymode[j];
					arraymode[j] = arraymode[k];
					arraymode[k] = temp;	
				}
			}
		}
		printf("%d", arraymode[0]);
			
		printf("\n");
	}
}