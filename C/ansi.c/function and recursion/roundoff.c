#include<stdio.h>
#include<stdlib.h>
int nnum[10];
void roundoff(char *num){
    int x,y=0;
    for (int i = 0; num[i] != '\0'; i++)
    {
        if(num[i]=='.'){
            x=i;
            continue;
        }
        nnum[y]=num[i]-'0';
        y++;
    }
    nnum[x+2]++;

    for (int i = 0; num[i] != '\0'; i++)
    {
        if(i==x+3){
            num[i]='\0';
            continue;
        }
        num[i]=num[y]+'0';
        y++;
    }
}

int main()
{
    char num[10];
    printf("Enter the number:");
    scanf("%s",num);
    roundoff(num);
    printf("number after rounded off:%s",num);
    printf("\n%d",nnum[4]);
return 0;
}