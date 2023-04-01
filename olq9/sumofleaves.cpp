#include <stdio.h>

int arr[100];
int a;

void dfs(int index, int sum){
    if(index>a-((a+1)/2) && index<=a) {
        printf("%d\n", sum);
        return;
    }
    if(index*2<=a) dfs(index*2,sum+arr[index*2]);
    if(index*2+1<=a) dfs(index*2+1, sum+arr[index*2+1]);
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        scanf("%d", &a);
        for(int j = 1; j<=a; j++ ){
            scanf("%d", &arr[j]);
        }
        printf("Case #%d:\n", i+1);
        dfs(1,arr[1]);
    }
}