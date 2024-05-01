#include<stdio.h>
int main()
{
   int arr[5]={1,3,6,9},x,*ptr,y=0;
   printf("Enter the integer:");
   scanf("%d",&x);
   for (int i = 0; i < 5; i++)
   {
      if (x<arr[i])
      {
         arr[4-y]=arr[3-y];
         y++;
      }
     
   }
   for (int i = 0; i < 5; i++)
   {
      if((arr[i]<x)&&(x<arr[i+1])){
      arr[i]=x;
      break;
      }
   }
   

   for (int i = 0; i < 5; i++)
   {
         printf("%d\t",arr[i]);
   }
   
return 0;
}