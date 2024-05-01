#include<stdio.h>

struct stores
{
    char name[20];
    float price;
    int quantity;
}item;

struct stores update(struct stores product,float p,int q){
    product.price+=p;
    product.quantity+=q;
    return product;
}

float mul(struct stores stock){
    return(stock.price*stock.quantity);
}

int main()
{
    float p_increament,value;
    int q_increament;
    // printf("Enter the name:");
    // scanf("%s",item.name);
    // printf("Enter the price:");
    // scanf("%f",&item.price);
    // printf("Enter the quantity:");
    // scanf("%d",&item.quantity);
    struct stores item = {"XYZ",25.75,12};
    printf("\nInput increment values:");
    printf(" price increment and quantity increment\n");
    scanf("%f%d",&p_increament,&q_increament);
    item=update(item,p_increament,q_increament);
    printf("Update values of item\n\n");
    printf("Name    : %s\n",item.name);
    printf("Price   : %f\n",item.price);
    printf("Quantity: %d\n",item.quantity);
    value=mul(item);
    printf("\nValue of the item = %f\n",value);
    return 0;
}