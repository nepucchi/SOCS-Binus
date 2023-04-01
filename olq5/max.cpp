#include <stdio.h>

int main(){
	int t,a;
	scanf("%d", &t);
	for (int i=0; i<t; i++){
		scanf("%d", &a);                         
		long long int max1 = -1000001;
		long long int max2;
		long long int arr[a];
			for (int j=0; j<a; j++){
				scanf("%lld", &arr[j]);
			}
			for (int j=0; j<a; j++){
				if (arr[j]>=max1){
					max2 = max1;
					max1 = arr[j];
				}
				else if (arr[j]>=max2 && arr[j]<=max1){
					max2 = arr[j];
				}
			}
		if (a>=2){
		printf("Case #%d: %lld\n", i+1, max1+max2);
		}
		else printf("\n");
		
	}
}
