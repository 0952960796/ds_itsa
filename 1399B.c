#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        int arr1[n];
        int mini = 2147483647;
        int mini1 = mini;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] < mini) mini = arr[i];
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &arr1[i]);
            if(arr1[i] < mini1) mini1 = arr1[i];
        }
        long long ans = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] - mini > arr1[i] - mini1) ans += (arr[i] - mini);
            else ans += (arr1[i] - mini1);
        }
        printf("%lld\n", ans);
    }
}