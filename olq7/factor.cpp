#include <stdio.h>
#include <math.h>

int main(){
     int t;
     scanf("%d", &t);
     for (int i = 0; i < t; i++){
         long long int n;
         scanf("%lld", &n);
         int counter = 0;
         for (int j = 1; j <= sqrt(n); j++){
             if (n%j == 0){
                 if (j*j != n){
                  counter+=2;   
                 }
                 else counter++;
             }
         }
         printf("Case #%d: %d\n", i+1, counter);
     }
    return 0;
}