#include<stdio.h>
#include<string.h>
int main()
{
    char names[10][10]={{"nitin"},{"abhishek"},{"aditya"},{"ritik"},{"ayush"}},temp[10],dump[10][10];
    int  rollno[10]={17,95,5,77,97},x=0,rnms[5];
    int  marks[10]={68,64,78,74,84};
    for (int i = 0; i < 5; i++)
    {
        strcpy(dump[i],names[i]);
    }
    
    printf("list of students according to names in alphabetical order:\n");
     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            if(strcmp(names[i],names[j+i])>0){
                 strcpy(temp,names[i]);
                strcpy(names[i] , names[i+j]);
                strcpy(names[i+j] , temp);
            }
            
        }
       
    }
    for (int i = 0; i < 5; i++)
    {
         for (int j = 0; j < 5; j++)
         {
            if(strcmp(names[i],dump[j])==0){
                rnms[i]=j;
                break;
            }
         }
                                  
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s ",dump[rnms[i]]);
        printf("%d ",rollno[rnms[i]]);
        printf("%d ",marks[rnms[i]]);
        printf("\n");
    }
    
    
    
return 0;
}