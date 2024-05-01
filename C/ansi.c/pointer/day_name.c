#include<stdio.h>

char day_name(int n){
    char day_name[10][10]={{'monday'},{'tuesday'},{'wednesday'},{'thursday'},{'friday'},{'saturday'}};
    char *ptr;
    ptr=day_name;
    return *(ptr+n+1);
}

int main()
{
    int x;
    printf("Enter the number for day:");
    scanf("%d",&x);
    printf("%s",day_name(x));
return 0;
}