#include<stdio.h>
int main()
{
    int x=10,y=20;
   x=x++ + ++y;
   y=++x + y++;
   printf("%d\n%d",x,y);
return 0;
}