#include<stdio.h>
int main()
{
    char str[]="hello I am nitin singh";
    char c[20][20];
    int b=0,n=0;
    for (int i = 0; i<20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
           
            c[i][j]=str[b];
            b++;
            if (str[b]==32)
            {
                c[i][j+1]='\0';
                b++;
                break;
            }
        }
        if (str[b]=='\0')
        {
            n=i;
            break;
        }
    }
    for(int i=0;i<=n;i++)
    printf("%s\n", c[i]);
    
return 0;
}