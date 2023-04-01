#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int result = 0;
        int counter[27] = {0};
        char kata[100001];
        scanf("%s", &kata);
        for(int j=0; j<strlen(kata); j++){
            counter[kata[j]-96]++;
        }
        for (int j=1; j<=26; j++){
            if(counter[j] >0){
                result++;
            }
        }
        if(result%2==0) printf("Case #%d: Breakable\n", i+1);
        else if(result%2!=0) printf("Case #%d: Unbreakable\n", i+1);
    }
}