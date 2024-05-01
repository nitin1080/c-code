#include<stdio.h>
#include<string.h>
void inserts(char *str,char *sub,int len1,int len2){
    for(int i=0;i<len1;i++){
        *(str+len2+len1-i-2)=*(str+len2-i-1);
    }
    *(str+len1+len2-2)='\0';
    for (int i = 0; i < 6; i++)
    {
        *(str+5+i)=*(sub+i);  
    }  
}

int main()
{
    char str[20],sub[10];
    printf("Enter the string:");
    fgets(str,20,stdin);
    printf("Enter the substring:");
    fgets(sub,10,stdin);
    printf("%d\n",strlen(sub));
    inserts(str,sub,strlen(sub),strlen(str));
    printf("%s",str);
return 0;
}