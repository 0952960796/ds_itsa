#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num % 2 == 0){
        int temp = num / 2;
        printf("%d\n", temp);
        for(int i = 0; i < temp; i++){
            printf("2");
            (i == temp - 1) ? printf("\n") : printf(" ");
        }
    }
    else{
        int temp = (num - 3) / 2;
        printf("%d\n", temp + 1);
        for(int i = 0; i < temp; i++){
            printf("2 ");
        }
        printf("3\n");
    }
}