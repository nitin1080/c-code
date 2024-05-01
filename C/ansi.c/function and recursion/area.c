// AREA UNDER THE CURVE OF Y=X^2+1.
#include<stdio.h>
#include<math.h>

float total_area(float a,float b,int n){
    float area=0,h1,h2;
    float base=(b-a)/n;
    for (int i = 0; i < n; i++)
    {
        h1=pow(a+base*i,2)+1;
        h2=pow(a+base*(i+1),2)+1;
        area+=0.5*(h1+h2)*base;
    }
    return area;
}

int main()
{
    float start_point,end_point;
    int num_traps;
    printf("Enter the starting point and ending point of the curve:");
    scanf("%f%f",&start_point,&end_point);
    printf("Enter the number of strip of curve:");
    scanf("%d",&num_traps);
    printf("total area under this curve = %f",total_area(start_point,end_point,num_traps));
return 0;
}