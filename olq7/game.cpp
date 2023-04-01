#include <stdio.h>
#include <string.h>

int main(){
    int len;
    int t;
    scanf("%d %d", &len, &t);
    char kata[len];
    scanf("%s", &kata);
    for (int i = 0; i < t; i++){
        int a;
        scanf("%d", &a);
        if (kata[a] >= 'a' && kata[a] <= 'z'){
            kata[a] -= 32;
        }
        else if (kata[a] >= 'A' && kata[a] <= 'Z'){
            kata[a] += 32;
        }
    }
    printf("%s\n", kata);
    return 0;
}