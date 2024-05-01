#include<stdio.h>
int main()
{
    int a=0,b=1,c,l;
    printf("Enter the limit:");
    scanf("%d",&l);
    for (int i = 0; i < l; i++)
    {
        
        c=b;
        printf("%d\t",a);
        b=b+a;
        a=c;
    }
    
return 0;
}