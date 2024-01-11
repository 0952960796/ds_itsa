#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int copy = n;
        int cnt1 = 0, cnt2 = 0;
        while(copy){
            int f = 0;
            if(copy % 2 == 0){
                copy /= 2;
                cnt1++;
                f = 1;
            }
            if(copy % 3 == 0){
                copy /= 3;
                cnt2++;
                f = 1;
            }
            if(!f) break;
        }
        if(copy != 1 || cnt1 > cnt2){
            printf("-1\n");
        }
        else{
            printf("%d\n", 2 * cnt2 - cnt1);
        }
        
    }
}