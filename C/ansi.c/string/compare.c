#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    int x=0;
    printf("Enter the first string:");
    fgets(str1,10,stdin);
    printf("Enter the second string:");
    fgets(str2,10,stdin);
    if(strlen(str1)==strlen(str2)){
        for (int i = 0; i < strlen(str1)-1; i++)
        {
            x=str1[i]-str2[i];
            if(x!=0)
            break;
        } 
         switch (x)
    {
    case 0:
        printf("Both strings are equal.");
        break;
    default:
        printf("strins are not equal.");
        break;
    } 
    }
    else
    printf("both strings are not equal.");
return 0;
}