#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    ptr = fopen("testdata.in", "r");
    int t;
    char kata[100];
    fscanf(ptr,"%d", &t);
    for(int i = 0; i<t; i++){
        int shift;
        char temp;
        fscanf(ptr,"%d\n", &shift);
        fscanf(ptr,"%[^\n]\n", &kata);
      
        for(int j = 0; j<strlen(kata); j++){
            if (kata[j] == '0') kata[j] = 'O';
            if (kata[j] == '1') kata[j] = 'I';
            if (kata[j] == '3') kata[j] = 'E';
            if (kata[j] == '4') kata[j] = 'A';
            if (kata[j] == '5') kata[j] = 'S';
            if (kata[j] == '6') kata[j] = 'G';
            if (kata[j] == '7') kata[j] = 'T';
            if (kata[j] == '8') kata[j] = 'B';
            if(kata[j] != 32){
                kata[j] -= shift;
                if(kata[j] < 'A'){
                    kata[j] = 'A' - kata[j];
                    kata[j] = 91 - kata[j];
                }
            }
        }
        printf("Case #%d: %s\n", i+1, kata);
    }
}