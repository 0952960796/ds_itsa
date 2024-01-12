#include<stdio.h>  
  
int main(){  
    int a;  
    while(scanf("%d", &a) != EOF){  
        printf("%.1f\n", (double)a * 1.6);  
    }  
} 