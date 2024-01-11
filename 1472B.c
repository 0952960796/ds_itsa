#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a = 0, b = 0;
        for(int i = 0; i < n; i++){
            int temp;
            scanf("%d", &temp);
            if(temp == 1) a++;
            else b++;
        }
        if(a % 2 == 0 && b % 2 == 0) printf("YES\n");
        else{
            if(a & 1) printf("NO\n");
            else{
                if(b & 1 && a == 0) printf("NO\n");
                else printf("YES\n");
            }
        }
    }
}