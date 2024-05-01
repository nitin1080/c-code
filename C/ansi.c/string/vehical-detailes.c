#include<stdio.h>
#include<string.h>
int main()
{
   char vehicle_type[][20]={{"MARUTI-800"},{"MARUTI-DX"},{"GYPSY"},{"MARUTI-VAN"}};
   char month_of_sales[][10]={{"02/01"},{"07/01"},{"04/02"},{"08/02"}};
   char price[][10]={{"210000"},{"265000"},{"315750"},{"240000"}};
   char *type,*periode;
   printf("Enter the type of vehicle and periode of selling:");
   gets(type);
   for(int i=0;i<4;i++){
    if((strcmp(vehicle_type[i],type))==0){
    printf("Vehicle type\tMonth of sales\tPrice\n");
    printf("%s\t",vehicle_type[i]);
    printf("%s\t\t",month_of_sales[i]);
    printf("%s\t",price[i]);
    break;
    }
   }
    
return 0;
}