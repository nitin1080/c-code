#include<stdio.h>
int main()
{
    char *sptr;
    sptr="DELHI";
    int lenth=0;
    printf("\n%s\n\n",sptr);
    while (*sptr!='\0')
    {
        printf("%c is stored at address %u\n",*sptr,sptr);
        sptr++;
        lenth++;
    }
    
    printf("\n Length of the string = %d\n\n",lenth);

return 0;
}