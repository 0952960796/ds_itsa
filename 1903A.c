#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int arr[a];
        int f = 0;
        for(int i = 0; i < a; i++){
            scanf("%d", &arr[i]);
            if(i == 0) continue;
            else{
                if(arr[i] < arr[i - 1]) f = 1;
            }
        }
        if(b != 1) printf("YES\n");
        else{
            if(f) printf("NO\n");
            else printf("YES\n");
        }
    }
}