#include <stdio.h>

struct asiq{
    char code[9];
    char day[10];
    int time;
};

int main(){
    int t;
    scanf("%d", &t);
    struct asiq yes[t];
    for(int i=0; i<t; i++){
        scanf("%s", &yes[i].code);
        scanf("%s", &yes[i].day);
        scanf("%d", &yes[i].time);
    }
    
    int a,temp;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &temp);
        printf("Query #%d:\n",i+1);
        printf("Code: %s\n", yes[temp-1].code);
        printf("Day: %s\n", yes[temp-1].day);
        if(yes[temp-1].time < 10) printf("Time: 0%d:00\n", yes[temp-1].time);
        else if (yes[temp-1].time >= 10) printf("Time: %d:00\n", yes[temp-1].time);
    }
}