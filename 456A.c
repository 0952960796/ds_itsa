#include<stdio.h>
#include<stdlib.h>

typedef struct Type{
    int a, b;
}type;

int cmp(const void* a, const void* b){
    return ((type*) a) -> a - ((type*) b) -> a;
}

int main(){
    int n;
    scanf("%d", &n);
    type arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &arr[i].a, &arr[i].b);
    }
    qsort(arr, n, sizeof(type), cmp);
    int f = 0;
    for(int i = 1; i < n; i++){
        if(arr[i].b - arr[i - 1].b < 0 && arr[i].a > arr[i - 1].a){
            f = 1;
            break;
        }
    }
    (f) ? printf("Happy Alex\n") : printf("Poor Alex");
    
}