#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);\
    while(t--){
        int n;
        scanf("%d", &n);
        char arr[150];
        arr[0] = '#';
        arr[n + 1] = '#';
        for(int i = 1; i <= n; i++){
            scanf(" %c", &arr[i]);
        }
        int f = 0;
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(arr[i] == arr[i - 1] && arr[i] == arr[i + 1] && arr[i] == '.') f = 1;
            if(arr[i] == '.') cnt++;
        }
        if(f) printf("2\n");
        else printf("%d\n", cnt);
    }
}