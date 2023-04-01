#include <stdio.h>

int main(){
	long long int a;
	scanf("%lld", &a);
	for (int i = 1; i <= a; i++){
		long long int b;
		long long int d = 0;
		scanf("%lld", &b);
		for (int x = 0; x < b; x++){
			long long int c;
			scanf("%lld", &c);
			d += c;
		}
		printf("Case #%d: ", i);
		printf("%lld\n", d);
	}
	return 0;
} 
