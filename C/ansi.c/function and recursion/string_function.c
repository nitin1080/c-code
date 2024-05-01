#include<stdio.h>
#include<math.h>
#include<string.h>

void str_add(char *str1,char *str2){
    for (int i = 0; i < strlen(str2)+strlen(str1); i++)
    {
        if(i<5);
        printf("%c",str1[i]);
        if(i>4)
        printf("%c",str2[i-strlen(str1)]);
    }
}

void str_cpy(char *str1,char *str2){
    for (int i = 0; i < strlen(str2); i++)
    {
        str1[i+5]=str2[i];
    }
    str1[10]='\0';
   printf("%s",str1); 
}

int main()
{
   char str1[10]="nitin",str2[10]="singh";
//    printf("Enter the first string:");
//    fgets(str1,10,stdin);
//    printf("Enter the second string:");
//    fgets(str2,10,stdin);
   str_add(str1,str2);
//    str_cpr(str1,str2);
printf("\n");
   str_cpy(str1,str2); 
return 0;
}