#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	int jojo[3];
	int lain[t];
	int sum = 0;
		for (int i = 0; i<3; i++){
			scanf("%d", &jojo[i]);
			sum += jojo[i];
		}
		for (int j = 0; j<t; j++){
			scanf("%d", &lain[j]);
			sum += lain[j];
		}
	
	if (jojo[0]>=(sum/(3+t))) printf("Jojo lolos\n");
	else printf("Jojo tidak lolos\n");
	
	if (jojo[1]>=(sum/(3+t))) printf("Lili lolos\n");
	else printf("Lili tidak lolos\n");
	
	if (jojo[2]>=(sum/(3+t))) printf("Bibi lolos\n");
	else printf("Bibi tidak lolos\n");
}
		

