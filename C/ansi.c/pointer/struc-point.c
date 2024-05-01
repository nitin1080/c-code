#include<stdio.h>

struct invent{
    char *name[20];
    int number;
    float price;
}product[3],*ptr;

int main()
{
    for( ptr=product;ptr<product+3;ptr++){
    printf("Enter the name,number and price:");
    scanf("%s%d%f",ptr->name,&ptr->number,&ptr->price);
    }

    printf("\nOUTPUT\n\n");
    ptr=product;
    while(ptr<product+3){
        printf("%-20s %5d %10.2f\n",ptr->name,ptr->number,ptr->price);
        ptr++;
    }
return 0;
}
// print_invent(struct invent *item){
//     printf("Name: %s\n",item->name);
//     printf("Price: %f\n",item->price);
// }
// print_invent(&product);