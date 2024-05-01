#include<stdio.h>
#include<string.h>

void sort(char **str,int size){
    char temp[10];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            if(strcmp(*(str+i),*(str+i+j))>0){
                strcpy(temp,*(str+i));
                strcpy(*(str+i) , *(str+i+j));
                strcpy(*(str+i+j),temp);
            }
        } 
    }
}

int main()
{
    char names[10][10];
    printf("Enter the names:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",names[i]);
    }
    sort(**names,25);
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",names[i]);
    }
return 0;
}