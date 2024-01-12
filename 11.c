#include<stdio.h>  
  
int main(){  
    int a, b;  
    while(scanf("%d", &a) != EOF && scanf("%d", &b) != EOF){  
        int arr[a][b];  
        for(int i = 0; i < a; i++){  
            for(int j = 0; j < b; j++){  
                scanf("%d", &arr[i][j]);  
            }  
        }  
        for(int i = 0; i < b; i++){  
            for(int j = 0; j < a; j++){  
                printf("%d", arr[j][i]);  
                if(j == a - 1) printf("\n");  
                else printf(" ");  
            }  
              
        }  
    }  
}