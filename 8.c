#include<stdio.h>  
  
int main(){  
    int a;  
    while(scanf("%d", &a) != EOF){  
        int f = 0;  
        for(int i = 2; i * i <= a; i++){  
            if(a % i == 0){  
                f = 1;  
                break;  
            }  
        }  
        if(f) printf("NO\n");  
        else printf("YES\n");  
    }  
}