#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,y=0;
    char name1[]="Suraj Singh";
    char *name[4]={"Nitin","Singh"};
    char temp[10];
    for (int i = 0; name1[i] != '\0'; i++)
    {
           if(name1[i]==32){
            strcpy(name[2+x],temp);
            name[3+x]='\0';
            x++;
            y=0;
            continue;
           }
           temp[y]=name1[i];
           temp[++y]='\0';
           y++;
    }
    printf("%s",name);
    
return 0;
}