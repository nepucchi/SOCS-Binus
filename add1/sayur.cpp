#include <stdio.h>

int main (){
	long long int a,b,c;
	scanf("%lld %lld %lld", &a, &b, &c);
	for (int i = 0; i < 3; i++){
		if (a>b && a>c){
			printf("Daging\n");
			a = 0;
		}
		else if (b>a && b>c){
			printf("Sayur\n");
			b = 0;
		}
		else if (c>b && c>a){
			printf("Telur\n");
			c = 0;
		}			
	}
//		if (a>b && a>c){
//			printf("daging\n");
//		}
//		else if (b>a && b>c){
//			printf("sayur\n");
//		}
//		else if (c>b && c>a){
//			printf("telur\n");
//		}
//		
//		if (b>a && b>c){
//			printf("sayur\n");
//		}
//		else if (c>b && c>a){
//			printf("telur\n");
//		}
//		else if (a>b && a>c){
//			printf("daging\n");
//		}
//		
//		if (c>b && c>a){
//			printf("telur\n");
//		}
//		else if (a>b && a>c){
//			printf("daging\n");
//		}
//		else if (b>a && b>c){
//			printf("sayur\n");
//		}						
	return 0;
}
