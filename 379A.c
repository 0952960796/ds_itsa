#include<stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int ans = 0;
    int good = n;
    int broke = 0;
    while(1){
        if(good == 0) break;
        ans += good;
        broke += good;
        good = broke / m;
        broke -= (good * m); 
    }
    printf("%d\n", ans);
}