#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, x;
        scanf("%d %d", &a, &x);
        int arr[a];
        int max_gap = 0;
        for(int i = 0; i < a; i++){
            scanf("%d", &arr[i]);
            if(i == 0) continue;
            else{
                if(arr[i] - arr[i - 1] > max_gap) max_gap = arr[i] - arr[i - 1];
            }
        }
        if(2 * (x - arr[a - 1]) > max_gap) max_gap = 2 * (x - arr[a - 1]);
        if(arr[0] > max_gap) max_gap = arr[0];
        printf("%d\n", max_gap);
    }
}