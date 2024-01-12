#include<stdio.h>  
  
int recur(int a){  
    if(a == 0 || a == 1) return a + 1;  
    return recur(a - 1) + recur(a / 2);  
}  
int main(){  
    int a;  
    scanf("%d", &a);  
    int ans = recur(a);  
    printf("%d\n", ans);  
    /*while(scanf("%d", &a) != EOF){ 
        int sum = 0; 
        for(int i = 1; i <= a; i++){ 
            if(i % 3 == 0) sum += i; 
        } 
        printf("%d\n", sum); 
    }*/  
}