#include<stdio.h>
#include<string.h>

struct date
{
    int day;
    int month;
    int year;
}d,d1;

void inputs(){
    printf("Enter date:");
    scanf("%d",&d.day);
    printf("Enter month:");
    scanf("%d",&d.month);
    printf("Enter year:");
    scanf("%d",&d.year);
}

struct date modify(struct date d){
    d.day+=1;
    d.month+=1;
    d.year+=1;
    return (d);
}

void valided(struct date d){
    if(d.day==31&&(d.month==2||d.month==4||d.month==6||d.month==9||d.month==11))
    printf("Entered date is not valid");
    if((d.day==31||d.day==30)&&(d.month==2))
    printf("Entered datr is not valid");
    if(d.day==29&&((d.year)%4!=0))
    printf("Entered date is not valid");
    if(d.month>12)
     printf("Entered date is not valid");
}

void outputs(struct date d){
    char month[15];
    switch (d.month)
    {
    case 1:
        strcpy(month,"January");
        break;
    case 2:
        strcpy(month,"faburary");
        break;
    case 3:
        strcpy(month,"March");
        break;
    case 4:
        strcpy(month,"April");
        break;
    case 5:
        strcpy(month,"May");
        break;
    case 6:
        strcpy(month,"June");
        break;
    case 7:
        strcpy(month,"July");
        break;
    case 8:
        strcpy(month,"August");
        break;
    case 9:
        strcpy(month,"September");
        break;
    case 10:
        strcpy(month,"October");
        break;
    case 11:
        strcpy(month,"November");
        break;
    case 12:
        strcpy(month,"December");
        break;
    }
    printf("%s %d, %d",month,d.day,d.year);
}

int main()
{
    inputs();
    printf("\n");
    modify(d);
    valided(d);
    printf("\n");
    outputs(d);
return 0;
}