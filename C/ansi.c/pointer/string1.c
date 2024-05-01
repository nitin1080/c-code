#include<stdio.h>
int main()
{
    char *name[3]={"New Zealand","Australiya","India"};
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",name[i]);
    }
    printf("%c",*(name[2]+1));
return 0;
}