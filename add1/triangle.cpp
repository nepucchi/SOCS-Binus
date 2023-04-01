#include <stdio.h>

int main (){
	int a,b;
	scanf("%d",&a);
	for (int x = 0; x < a; x++){
		scanf("%d", &b);
		printf("Case #%d:\n", x+1);
		for (int baris = 0; baris < b; baris++){
			for (int kolom = 0; kolom < b; kolom++){
				if (kolom>baris){
					printf(" ");
				}
			}	
			for (int kolom = 0; kolom < b; kolom++){
				if (kolom<=baris){
					if (b%2 == 0){
						if (kolom%2 == 0){
							printf("#");
						}
						if (kolom%2 == 1){
							printf("*");
						}
					}
					if (b%2 == 1){
						if (kolom%2 == 0){
							printf("*");
						}
						if (kolom%2 == 1){
							printf("#");
						}
					}
				}	
			}
		printf("\n");
		}
	}
}
