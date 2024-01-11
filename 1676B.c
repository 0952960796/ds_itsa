#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        int mini = 2147483647;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] < mini) mini = arr[i];
        }
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += (arr[i] - mini);
        }

        printf("%d\n", sum);
    }
}