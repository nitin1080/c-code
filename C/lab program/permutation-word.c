#include<stdio.h>
#include<string.h>

int permutation(int x){
    if(x<2)
    return 1;
    else
    return x*permutation(x-1);
}

void swap(char *char1,char *char2){
    char temp;
    temp=*char2;
    *char2=*char1;
    *char1=temp;
}
int main()
{
    char str[10];
    int x,y=0;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    x=permutation(strlen(str)-1); 
    printf("%d\n",x);
    char string[x][10];
     printf("%s",str);
    for (int i = 0; i < (x-1); i++)
    {
        if(i%(strlen(str)-2)==0&&i!=0)
        y+=strlen(str)-2;
       
        swap(&str[i-y],&str[i+1-y]);
         printf("%s",str); 
    }
   
return 0;
}