#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void replaceword(char* str,char* oldwd,char* newwd){
   char *pos,temp[100];
   int index=0,owlen;
   owlen=strlen(oldwd);
   while((pos=strstr(str,oldwd))!=NULL){
      strcpy(temp,str);
      index=pos-str;
      // printf("%d\t%d",index,owlen);
      str[index]='\0';
      strcat(str,newwd);
      strcat(str,temp+index+owlen);
   }
}

int main()
{
    char str[100],oldwd[10],newwd[10];
    printf("Enter the string:");
    gets(str);
    printf("Enter the word to be replaced:");
    gets(oldwd);
    printf("Enter the new word:");
    gets(newwd);
    replaceword(str,oldwd,newwd);
    printf("\nModified string:\n%s",str);
return 0;
}