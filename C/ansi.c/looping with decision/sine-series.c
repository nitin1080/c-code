#include<stdio.h>
#include<math.h>
int fact(int x){
    if (x==0)
    return 1;
    else
    return x*fact(x-1);
}
int main()
{
      int i=3;
    float x,value=x;
    printf("Enter the argument of sine:");
    scanf("%f",&x);
    while((x/fact(i)-x/fact(i+1))>0.00001){
        int k=1;
        value+=pow(i,x)/fact(i)*pow(k,-1);
        i+=2;
        k++;
        printf("%f\t",value);
    }
    printf("Result = %f",value);
    
return 0;
}