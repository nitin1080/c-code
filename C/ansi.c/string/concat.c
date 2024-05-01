#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    printf("Enter the first string:");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the second string:");
    fgets(str2,sizeof(str2),stdin);
    printf("str1=%d\nstr2=%d\n",strlen(str1),strlen(str2));
    printf("concatenated string is:");
    for(int i=0;i<(strlen(str1)+strlen(str2)-2);i++){
        if(i<(strlen(str1)-1)){
            printf("%c",str1[i]);
        }
        if((strlen(str1)-2)<i){
            printf("%c",str2[i-5]);
        }
    }
return 0;
}