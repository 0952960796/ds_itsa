#include<stdio.h>

int main(){
    int arr[1050];
    int prefix[1050];
    int preprefix[1050];
    arr[0] = 0;
    arr[1] = 0;
    prefix[0] = 0;
    prefix[1] = 0;
    preprefix[1] = 0;
    preprefix[0] = 0;
    for(int i = 2; i < 1002; i++){
        arr[i] = i - 1;
        prefix[i] = prefix[i - 1] + arr[i];
        preprefix[i] = preprefix[i - 1] + prefix[i]; 
    }
    int n;
    scanf("%d", &n);
    int ans = 0;
    for(int i = 2; i < 100; i++){
        if(preprefix[i] <= n) ans = i - 1;
        else break;
    }
    printf("%d\n", ans);
    
}