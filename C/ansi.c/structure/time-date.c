#include<stdio.h>

struct date{
    int hour;
    int minutes;
    int second;
}x;

void inputs(){
    printf("Enter the hour:");
    scanf("%d",&x.hour);
    printf("Enter the minutes:");
    scanf("%d",&x.minutes);
    printf("Enter the second:");
    scanf("%d",&x.second);
}

void outputs(struct date x){
    printf("%d:%d:%d",x.hour,x.minutes,x.second);
}

int main()
{
    inputs();
    outputs(x);
return 0;
}