#include <stdio.h>

int main (){
	int t;
	scanf("%d", &t);
	for (int i=0; i<t; i++){
		int a;
		scanf("%d", &a);
		int arr[a];
		int count;
		int maxcount = 0;
		int mincount = 1000000000;
		for (int j=0; j<a; j++){
			scanf("%d", &arr[j]);
		}
		
		for (int j=0; j<a; j++){
			count = 1;
			for (int k = j+1; k < a; k++){
				if (arr[j] == arr[k]){
						count++;	
				}		
			}
			if (count>maxcount){
				maxcount = count;
			}			
		}

		for (int j = 0; j < a; j++){
			count = 1;
			for (int k = j+1; k < a; k++){
				if (arr[j] == arr[k]){
					count++;
				}
			}
			if (count == maxcount && arr[j]<mincount){
				mincount = arr[j];
			}			
		}
		printf("Case #%d: %d\n", i+1, maxcount);
		printf("%d\n", mincount);
	}
}