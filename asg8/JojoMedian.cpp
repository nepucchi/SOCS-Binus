#include <stdio.h>

struct asik{
    char id[10];
    char buah[100];
    double harga;
};

// void sort(struct asik array[],int t){
//     struct asik temp;
//     for (int i = 0; i<t; i++){
//         for(int j = 0; j<t-1-i; j++){
//             temp = array[j];
//             array[j] = array[j+1];
//             array[j+1] = temp;
//         }
//     }
// };

int main(){
    int t;
    scanf("%d", &t);
    getchar();
    struct asik yes[t];
    for(int i=0; i<t; i++){
        scanf("%s", &yes[i].id); getchar();
        scanf("%[^\n]", &yes[i].buah); getchar();
        scanf("%lf", &yes[i].harga); getchar();
    }
    // sort(yes,t);
    double median = 0;
    if(t%2==0){
        int temp;
        temp = t/2;
        median = (yes[temp-1].harga + yes[temp].harga)/2;
    }
    else{
        int temp;
        temp = t/2;
        median = yes[temp].harga;
    }

    for(int i=0; i<t; i++){
        if(yes[i].harga >= median){
            printf("%s %s\n", yes[i].id, yes[i].buah);  
        }
    }
}