#include<stdio.h>   
#include<string.h>  
int main()  
{  
    char sub[150],str[600];  
    scanf("%s %s",sub,str);  
    int ans = 0;  
    for(int i=0;i<=strlen(str) - strlen(sub);i++)  
    {  
        for(int j=0;j<strlen(sub);j++)  
        {  
            if(str[i+j] != sub[j])  
            {  
                break;  
            }  
            if(j == strlen(sub) - 1)  
            {  
                ans++;  
            }  
        }  
    }  
    printf("%d\n",ans);  
    return 0;  
}