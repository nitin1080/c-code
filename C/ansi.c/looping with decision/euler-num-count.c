#include<stdio.h>

int fact(int x){
    if (x==0)
    return 1;
    else
    return x*fact(x-1);
}
int main()
{
     int i=1;
    float x,value=1;
    printf("Enter the base of e:");
    scanf("%f",&x);
    while((x/fact(i)-x/fact(i+1))>0.00001){
       
        value+=x/fact(i);
        i++;
        printf("%f\t",value);
    }
    printf("Result = %f",value);
return 0;
}