#include <stdio.h>
#include <string.h>

int a,b,c,i,j,k;

struct lis{
  char nama[100];
  int angka;
};

void sortnama(lis arr[]){
    struct lis temp;

    for (int l = 1; l < a; l++){
          for (int m = 0; m< a - l; m++){
             if (strcmp(arr[m].nama, arr[m + 1].nama) > 0) {
                temp = arr[m];
                arr[m] = arr[m + 1];
                arr[m + 1] = temp;
             }
        }
    }
}

int main(){
  int tc;
    scanf("%d",&tc);
    for (i=0; i<tc; i++){
        scanf("%d",&a);
        struct lis out[a];
        for(j=0; j<a; j++){
            scanf("%[^#]#%d",out[j].nama,&out[j].angka);
            getchar();
        }
    sortnama(out);
    for(int j = 0; j<a; j++){
      printf("%s\n", out[j].nama);
    }
    }    
    return 0;
}