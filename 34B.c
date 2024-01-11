#include<stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < k; i++){
                    
        if(arr[i] <= 0) ans += arr[i];
    }
    printf("%d\n", ans * -1);
}