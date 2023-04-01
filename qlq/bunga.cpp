#include <stdio.h>
#include <math.h>

int main (){
	int a;
	double b, bunga;
//	double persen = 1
	scanf("%d %lf",&a, &b);
	bunga = pow((1 + b/100), 3);
//	for (i == 0; i < 3; i++){
//		persen*=bunga
//	}
	printf("%.2f\n", bunga*a);
	return 0;
}
