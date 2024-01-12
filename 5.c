#include<stdio.h>  
  
int main(){  
    int a;  
    int arr[8];  
    while(scanf("%d", &a) != EOF){  
        for(int i = 0; i < 8; i++){  
            if(a & 1) arr[i] = 1;  
            else arr[i] = 0;  
            a >>= 1;  
        }  
        for(int i = 7; i >= 0; i--){  
            printf("%d", arr[i]);  
        }  
        printf("\n");  
    }  
}