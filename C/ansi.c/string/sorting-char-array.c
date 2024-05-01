#include<stdio.h>
#include<string.h>
int main()
{
    char arr[5][20],temp[20];
    printf("Enter the five name:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            if(strcmp(arr[i],arr[j+i])>0){
                strcpy(temp,arr[i]);
                strcpy(arr[i] , arr[i+j]);
                strcpy(arr[i+j] , temp);
            }
        }
        
    }
    printf("sorted names is:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",arr[i]);
    }
    
return 0;
}