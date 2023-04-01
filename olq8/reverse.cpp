#include <stdio.h>
#include <string.h>


int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		char kata[1000];
		scanf("%s", kata);
		printf("Case #%d: ", i+1);
		for (int j = strlen(kata)-1; j >= 0; j--){
            if (kata[j] >= 'a' && kata[j] <= 'z') printf("%c", kata[j]-32);	
            else if (kata[j] >= 'A' && kata[j] <= 'Z') printf("%c", kata[j]+32);
		}
	printf("\n");
	}
}