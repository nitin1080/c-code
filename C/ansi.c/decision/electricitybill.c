#include<stdio.h>
int main()
{
    int units;
    char name[20];
    printf("Enter your nmae:");
    fgets(name,20,stdin);
    printf("Enter your cnsumed units:");
    scanf("%d",&units);
    if(units<=200){
        printf("%s your charges is %.2f in rupees.",name,(float)(units*80)/100);
    }
    else if(units<=300){
               printf("%s your charges is %.2f in rupees.",name,(float)((200*80)+(units-200)*90)/100);
    }
    else{
            printf("%s your charges is %.2f in rupees.",name,(float)((200*80)+(100*90)+(units-300))/100);
    }
return 0;
}