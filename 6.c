#include<stdio.h>  
  
int main(){  
    int a;  
    while(scanf("%d", &a) != EOF){  
        if(a >= 3 && a <= 5) printf("Spring\n");  
        else if(a > 5 && a <= 8) printf("Summer\n");  
        else if(a > 8 && a <= 11) printf("Autumn\n");  
        else printf("Winter\n");  
    }  
}