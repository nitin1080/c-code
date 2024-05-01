#include<stdio.h>

int febo(int n){
    if(n<2){
        return n;
    }
    else{
        return febo(n-1)+febo(n-2);
    }
}

int main(){
    int n;
    printf("Enter the limit of sereies:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
       printf("%d\t",febo(i));
    }
    return 0;
}