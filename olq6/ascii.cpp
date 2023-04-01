#include <stdio.h>
#include <string.h>


int main (){
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		char kata[1337];
		scanf("%s", &kata);
		
	printf("Case %d: ", i+1);
	printf("%d", (int)kata[0]);
		for (int j = 1; j < strlen(kata); j++){
			printf("-%d", (int)kata[j]);
		}
	printf("\n");
	} 
}
