#include <stdio.h>
int main(){
	int A,B,C;
	scanf("%d", &A);
	B = A + A;
	printf("%d plus %d is %d\n",A,A,B);
	C = B - 1;
	printf("minus one is %d\n",C);
	return 0;
}
