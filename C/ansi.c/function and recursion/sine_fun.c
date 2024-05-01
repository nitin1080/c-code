#include<stdio.h>
#include<math.h>
int n=1;

int fact(int x){
    if(x<2)
    return 1;
    else
    return x*fact(x-1);
}

float sine_series(int x){
    if(((pow(x,n))/fact(n))<0.00001)
    return 0;
    n+=2;
    return (pow(x,n))/fact(n)-sine_series(x);
    
}

int main()
{
    int x;
    printf("Enter the limit of sereis:");
    scanf("%d",&x);
    printf("%f",x+sine_series(x));
return 0;
}