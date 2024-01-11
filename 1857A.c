#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            int temp;
            scanf("%d", &temp);
            if(temp & 1) cnt++;
        }
        (cnt & 1) ? printf("NO\n") : printf("YES\n");
    }
}
