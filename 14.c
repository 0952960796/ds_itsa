#include<stdio.h>  
#include<string.h>  
#include<ctype.h>  
  
int main(){  
    char arr[100000];  
    while(scanf("%s", &arr) != EOF){  
        int len = strlen(arr);  
        int f = 0;  
        for(int i = 0; i < len / 2; i++){  
            if(arr[i] != arr[len - i - 1]){  
                f = 1;  
                break;  
            }  
        }  
        if(f) printf("NO\n");  
        else printf("YES\n");  
    }  
} 