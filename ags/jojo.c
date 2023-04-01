
//	int A,B,C,D,E,F,G,H,I,J,K,L;
//	float Q,W,R;
//	scanf("%d %d %d %d", &A, &B, &C, &D);
//	scanf("%d %d %d %d", &E, &F, &G, &H);
//	scanf("%d %d %d %d", &I, &J, &K, &L);
//	Q = ((A/1)*2) + ((B/2)*4) + ((C/3)*6) + ((D/4)*4);
//	W = ((E/1)*2) + ((F/2)*4) + ((G/3)*6) + ((H/4)*4);
//	R = ((I/1)*2) + ((J/2)*4) + ((K/3)*6) + ((L/4)*4);
//	printf("%.2f\n%.2f\n%.2f\n",Q,W,R);
#include <stdio.h>

int main(){
    for (int i = 0; i < 3; i++)
    {
        float a, b, c, d;
        scanf("%f %f %f %f", &a, &b, &c, &d);
        printf("%.2f\n", 2*(a+b+c)+d);
    }
    return 0;
}
