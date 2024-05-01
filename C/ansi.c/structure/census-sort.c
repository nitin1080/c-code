#include<stdio.h>
#include<string.h>

struct census
{
    char city[10];
    long int population;
    float literacy;
}cen[5];

void sort_city(struct census cen[5]){
    int j=0,ter[5],x;
    char temp[10];
    for (int i = 0; i < 5; i++)
    {
        for( j=i+1;j<5;j++){
        if((strcmp(cen[i].city,cen[j].city))>0){
            strcpy(temp,cen[i].city);
            x=cen[i].population;
            cen[i].population=cen[j].population;
            strcpy(cen[i].city,cen[j].city);
            cen[j].population=x;
            strcpy(cen[j].city,temp);
        }
    }
 } 
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Entered the name,population and litracy of city:");
        scanf("%s%d%f",cen[i].city,&cen[i].population,&cen[i].literacy);
    }

    sort_city(cen);
    
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%f",cen[i].city,cen[i].population,cen[i].literacy);
        printf("\n");
    }    
return 0;
}