#include <stdio.h>
#include <string.h>

int main(){
    int length;
    char kata[101];
    for (int i = 0; i < 3; i++){
        scanf("%d %s", &length, &kata);
        printf("%c%c\n", kata[length-1], kata[0]);
    }
    return 0;
}