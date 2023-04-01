#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    int arr[3];
    for (int i = 0; i<t; i++){
        for (int j = 0; j<3; j++){
            scanf("%d", &arr[j]);  
        }
        if (arr[0] + arr[1] > arr[2] && arr[0] + arr[2] > arr[1] && arr[1] + arr[2] > arr[0]){
            printf("Case #%d: Yes\n", i+1);
        }
        else printf("Case #%d: No\n", i+1);
    }
}