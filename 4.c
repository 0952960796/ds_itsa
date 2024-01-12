#include<stdio.h>  
  
int main(){  
    int a, b;  
    int c, d;  
    scanf("%d %d %d %d", &a, &b, &c, &d);  
    int time = (c - a) * 60 + (d - b);  
    int sum = 0;  
    if(time <= 120){  
        printf("%d\n", (time / 30) * 30);  
    }  
    else{  
        sum += 120;  
        time -= 120;  
        if(time <= 120){  
            printf("%d\n", (time / 30) * 40 + sum);  
        }  
        else{  
            sum += 160;  
            time -= 120;  
            printf("%d\n", (time / 30) * 60 + sum);  
        }  
    }  
}