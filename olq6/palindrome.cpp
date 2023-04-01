#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		char kata[569];
		scanf("%s", &kata);
		int status = 0;
		int len = strlen(kata);
		for (int j = 0; j<len; j++){
			if (kata[j] != kata[len-j-1]){
				status = 1;
				break;
			}
		}
		if (!status) printf("Case #%d: Yay, it's a palindrome", i+1);
		else if (status) printf("Case #%d: Nah, it's not a palindrome", i+1);
		printf("\n");
	}
}
