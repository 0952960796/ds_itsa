#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char arr[20];
    scanf("%s", arr);
    int len = strlen(arr);
    for(int i = 0; i < len; i++){
        if(i == 0 && arr[i] == '9') continue;
        if(arr[i] >= '5'){
            arr[i] = (char)('0' + ('9' - (int)arr[i]));
        }
    }
    printf("%s\n", arr);
}