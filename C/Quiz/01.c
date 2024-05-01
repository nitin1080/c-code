#include <stdio.h>
int main()
{
    int a, b, d;
    printf("Enter the size of arrey: ");
    scanf("%d", &a);
    int c[a];
    printf("Enter the elements of arrey: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &c[i]);
    }
    printf("Enter the serial number which you want to insert in arrey: ");
    scanf("%d", &b);
    printf("Enter the value which you want to change in arrey: ");
    scanf("%d", &d);
    int p[a+1];
    p[b-1]=d;
    for (int i = 0; i < a; i++)
    {
       if (i<b-1)
       {
        p[i]=c[i];
       }
       else
        p[i+1]=c[i];
    }
    for (int i = 0; i < a+1; i++)
    {
        printf("%d\t", p[i]);
    }
    
    return 0;
}