#include<stdio.h>
#include<string.h>
void delete(char *p, int l)
{
    char n;
    int b=0;
    printf("Enter the char youn want to delete: ");
    scanf("%c", &n);
    for (int i = 0; i <= l; i++)
    {
         *p=*(p+b);
        if (*p==n)
        {
            b++;
            continue;
        }
       p++;
       
    }
    
}
int main()
{
    char a[]={"we are currently doing programming in c language"};
    char *ptr=a;
    int c=strlen(a);
    delete(a, c);
    printf("%s", a);
return 0;
}