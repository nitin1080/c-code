#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    char c;
    printf("Enter the angle in radians:");
    scanf("%lf",&x);
    printf("Enter the first later of sin,cos and tan:");
    scanf(" %c",&c);
    switch(c){
        case 'c':
        printf("%lf",cos(x));
        break;
        case 'C':
        printf("%lf",cos(x));
        break;
        case 't':
        printf("%lf",cos(x));
        break;
        case 'T':
        printf("%lf",cos(x));
        break;
        case 's':
        printf("%lf",cos(x));
        break;
        case 'S':
        printf("%lf",cos(x));
        break;
        
    }
return 0;
}