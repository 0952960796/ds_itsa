#include<stdio.h>  
#define int long long  
signed main(){  
    int n;  
    scanf("%lld", &n);  
    int arr[n];  
    int clone[n];  
    int sum[20] = {0};  
    for(int i = 0; i < n; i++){  
        scanf("%lld", &arr[i]);  
        clone[i] = arr[i];  
    }  
    for(int i = 0; i < n; i++){  
        while(clone[i] != 0){  
            sum[i] += clone[i] % 10;  
            clone[i] /= 10;  
        }  
    }  
    for(int i = 0; i < n - 1; i++){  
        for(int j = i + 1; j < n; j++){  
            if(sum[i] > sum[j]){  
                int temp = arr[i];  
                arr[i] = arr[j];  
                arr[j] = temp;  
                temp = sum[i];  
                sum[i] = sum[j];  
                sum[j] = temp;  
            }  
            if(sum[i] == sum[j]){  
                if(arr[i] > arr[j]){  
                    int temp = arr[i];  
                    arr[i] = arr[j];  
                    arr[j] = temp;  
                    temp = sum[i];  
                    sum[i] = sum[j];  
                    sum[j] = temp;  
                }  
            }  
        }  
    }  
    for(int i = 0; i < n; i++){  
        printf("%lld", arr[i]);  
        if(i != n - 1) printf(" ");  
    }  
    printf("\n");  
}