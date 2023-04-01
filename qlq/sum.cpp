#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	long long int sum = 0;
	for (int i = a; i<=b; i++){
		sum += i; // sum = sum + 1; sum = 0 + 12 = 12; sum = 12 + 13 = 25; sum = 25 + 14
	}
	printf("%lld\n", sum);
	return 0;
}


