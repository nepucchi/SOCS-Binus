#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++){

		int g,b;
		scanf("%d %d",&g,&b);
		if (g > b){
			printf("Case #%d: ", i);
			printf("Go-Jo\n");
		}
		else if (g < b){
			printf("Case #%d: ", i);
			printf("Bi-Pay\n");
		} 
	}
		return 0;
}
