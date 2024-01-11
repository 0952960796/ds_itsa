#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i = 2; i < n; i++){
            if(n % ((2 << (i - 1)) - 1) == 0){
                printf("%d\n", n / ((2 << (i - 1)) - 1) );
                break;
            }
        }
    }
}