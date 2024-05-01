#include<stdio.h>
#include<string.h>
int main()
{
   char str[]="I am Nitin Singh";
   int temp[10]={0},x=0;
   for (int i = 0; str[i] != '\0'; i++)
   {
      if(str[i]==32){
         x++;
         continue;
      }
      temp[x]+=1;
   }
   for (int i = 0; i <= x; i++)
   {
      printf("lenth of word number %d is %d.\n",i+1,temp[i]);
   }
   
    
return 0;
}