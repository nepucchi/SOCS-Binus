#include <stdio.h>
#include <string.h>


int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		char kata[1000];
		scanf("%s", kata);
		printf("Case #%d : ", i+1);
		printf("%c", kata[strlen(kata)-1]);
		for (int j = strlen(kata)-2; j >= 0; j--){
			printf("%c", kata[j]);	
		}
	printf("\n");
	}
}
