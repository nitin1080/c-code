#include<stdio.h>
int main()
{
    int n,e;
    printf("Enter the no. vertex:");
    scanf("%d",&n);
    if(n<3)
    printf("edges=0");
    else{
        e=3;
        for(int i=3;i<n;i++){
            e=e+3+(i-3);
        }
    }
    printf("edges=%d",e);
return 0;
}