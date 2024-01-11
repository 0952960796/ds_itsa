#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
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
        int mini = 2147483647;
        for(int i = 1; i < n; i++){
            if(arr[i] - arr[i - 1] < mini) mini = arr[i] - arr[i - 1];
        }
        printf("%d\n", mini);
        
    }
}