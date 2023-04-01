#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        char kata[100001];
        int counter[27] = {0};
        scanf("%s", &kata);
        int len = strlen(kata);
        for(int j=0; j<len; j++){
            counter[(int)kata[j]-96]++;
        }
        int result = 0;
        for(int j=1; j<=26; j++){
            if(counter[j] > 0) result++;
        }
        if(result%2==0) printf("Case #%d: Breakable\n", i+1);
        else printf("Case #%d: Unbreakable\n", i+1);
    }
}