#include <stdio.h>
#include <string.h>
struct asiq{
    char pdk[100];
    char pjg[100];
};

int linearsearch(char key[], int total, asiq kata[]){
    int hasil = -1;
    for(int i = 0; i<total; i++){
        if(strcmp(key,kata[i].pdk) == 0){
            hasil = i;
            return hasil;
        }
    }
    return hasil;
}

int main(){
    FILE *ptr = fopen("testdata.in", "r");
    int t1,t2;
    fscanf(ptr,"%d\n",&t1);
    struct asiq yes[t1];
    for(int i = 0; i<t1; i++){
        fscanf(ptr, "%[^#]#%[^\n]\n",&yes[i].pdk, &yes[i].pjg);
    }
    char kalimatbaru[69][69];
    char kalimat[200];
    fscanf(ptr, "%d\n", &t2);
    for(int i = 0; i<t2; i++){
        fscanf(ptr, "%[^\n]\n", kalimat);
        int counterword = 0;
        int counter = 0;
        for(int j = 0; j<=strlen(kalimat); j++){
            if(kalimat[j] == ' ' || kalimat[j] == '\0'){
                kalimatbaru[counterword][counter] = '\0';
                counter = 0;
                counterword++;
            }
            else{
                kalimatbaru[counterword][counter] = kalimat[j];
                counter++;
            }
        }

        printf("Case #%d:\n", i+1);

        for(int j = 0; j<counterword; j++){
            int hasil = linearsearch(kalimatbaru[j],t1,yes);
            if (hasil != -1){
                if(j == 0){
                    printf("%s", yes[hasil].pjg);
                }else {
                    printf(" %s", yes[hasil].pjg);
                }
            }else{
                if(j == 0){
                    printf("%s", kalimatbaru[j]);
                }else {
                    printf(" %s", kalimatbaru[j]);
                }
            }
        }
        printf("\n");
    }
    fclose(ptr);
}
