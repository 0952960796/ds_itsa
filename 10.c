#include<stdio.h>  
  
int gcd(int a, int b){  
    if(b == 0) return a;  
    else return gcd(b, a % b);  
}  
int main(){  
    int a;  
    int b;  
    scanf("%d %d", &a, &b);  
    int ans = gcd(a, b);  
    printf("%d\n", ans);  
    /*while(scanf("%d", &a) != EOF){ 
        int sum = 0; 
        for(int i = 1; i <= a; i++){ 
            if(i % 3 == 0) sum += i; 
        } 
        printf("%d\n", sum); 
    }*/  
}