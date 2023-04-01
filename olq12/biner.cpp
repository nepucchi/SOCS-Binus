#include <stdio.h>
#define ul unsigned long long

int binarySearch(ul x, ul l, ul r){
    if (r >= l) {
        ul mid = l + (r - l) / 2;
        ul hasil = mid*(mid+1) * (2*mid+1) / 6;
        if (hasil == x)
            return mid;
        if (hasil > x)
            return binarySearch(x,l,mid - 1);
        return binarySearch(x,mid + 1, r);
    }
    return r+1;
}

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        ul m;
        scanf("%llu" ,&m);
        int hasil = binarySearch(m,1,5000000);
        printf("Case #%d: %llu\n",i+1, hasil);
    }
    return 0; 
}