#include<stdio.h>  
  
int main(){  
    int t;  
    scanf("%d", &t);  
    while(t--){  
        char ca;  
        int a, b, c, d;  
        scanf(" %c %d %d %d %d", &ca, &a, &b, &c, &d);  
        if(ca == '+') printf("%d %d\n", a + c, b + d);  
        if(ca == '-') printf("%d %d\n", a - c, b - d);  
        if(ca == '*') printf("%d %d\n", a * c - b * d, a * d + b * c);  
  
    }  
}