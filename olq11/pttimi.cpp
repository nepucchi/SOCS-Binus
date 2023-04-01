#include <stdio.h>
#include <string.h>

struct Data{
    char name[41];
    char pohon[41];
};


int search(char target[], int tc, Data arr[]) {
    int idx = -1;
    for(int i = 0; i < tc; i++){
        if(strcmp(target, arr[i].name) == 0 ){
            idx = i;
        }
    }
    return idx;
}

int main() {
    int tc;
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &tc);
    Data t[tc];
    for(int i = 0; i < tc; i++){
        fscanf(fp, "%[^#]#%[^\n]\n", &t[i].name, &t[i].pohon);
    }
    
    int tc1;
    fscanf(fp, "%d", &tc1);
    char target[41];
    for(int i = 0; i < tc1; i++){
        fscanf(fp, "%s", &target);
        int hasil = search(target, tc, t);
        printf("%d", hasil);
    }
    return 0;
}

