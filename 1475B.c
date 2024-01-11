#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a = n / 2020;
        int b = n % 2020;
        if(b <= a) printf("YES\n");
        else printf("NO\n");
    }
}