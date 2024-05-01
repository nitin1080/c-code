#include<stdio.h>
int x;
int fabo(int x){
    if(x==1)
    return 0;
    else if(x<3)
    return 1;
    else
    return fabo(x-1)+fabo(x-2);
}
int main()
{
 printf("Enter the limit:");
 scanf("%d",&x); 
 for(int i=1;i<=x;i++){
 printf("%d\t",fabo(i));  
 }
return 0;
}