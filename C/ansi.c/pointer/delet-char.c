#include<stdio.h>
#include<string.h>

int j=0;
void del_char(char *str2,char c,int l){

    for (int i = 0; i <=l; i++)
    {
        *str2=*(str2+j);
        if(*str2==c){
            j++;
            continue;
        }
        str2++;
    }
    
}

int main()
{
    char str1[20],c1;
    printf("Enter the string:");
    gets(str1);
    int l=strlen(str1);
    printf("Enter the charecter:");
    scanf("%c",&c1);
    del_char(str1,c1,l);
   printf("%s",str1);
return 0;
}