#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ang;
    int hasil = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &ang);
        if(ang != 0){
            hasil++;
        }
    }
    if(hasil == 0){
        printf("easy\n");
    }
    else printf("not easy\n");
}