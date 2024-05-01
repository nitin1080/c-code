#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
      char str[100]="I am nitin singh. I am pursuing b.tech now.";
      int i=0,x=1;
      char c=' ';
      while(str[i]!='\0'){
       if(str[i]==32)
       x++;
        i++;
      }
      printf("%d",x);
return 0;
}