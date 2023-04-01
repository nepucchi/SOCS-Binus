#include <stdio.h>
#include <string.h>


int main(){
    FILE *ptr;
    ptr = fopen("testdata.in", "r");
    int t;
    fscanf(ptr,"%d\n", &t);
    char kata[100];
    int counter[27][2];
    int proc;
    char a,b;
    for(int i = 0; i<t; i++){
        for(int j = 0; j<26; j++){
            counter[j][0] = 0;
            counter[j][1] = 0;
        }
        fscanf(ptr,"%s\n", &kata);
        for(int j = 0; j<strlen(kata); j++){
            counter[kata[j] - 'A'][0]++;
        }
        // for(int j = 0; j<26; j++){
        //     printf("%d", counter[j][0]);
        // }
        fscanf(ptr,"%d\n", &proc);
        for(int j = 0; j<proc; j++){
            fscanf(ptr,"%c %c\n",&a,&b);
            if(counter[a - 'A'][1] != 1){
                counter[b - 'A'][0] += counter[a - 'A'][0];
                counter[a - 'A'][0] = 0;
                counter[a - 'A'][1] = 1; 
            }
        }
        for(int j = 0; j<26; j++){
            if(counter[j][0] > 0){
                printf("%c %d\n", j + 'A', counter[j][0]);
            }
        }
    }
    fclose(ptr);
    return 0;
}
