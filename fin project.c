#include <stdio.h>

int main() {
char product [100];
char name [100];
int code;
float prise;
int quantity;
int choice;
int i;
int productsnumber;
printf("1- add a new product : \n");
printf("2- add several new products : \n ");
printf("3-search on pruduct : \n");
printf("4-delet a product : \n");
scanf("%d",&choice);
switch (choice){
    case 1: printf("product name : ");
            scanf("%s",&product);  
            printf(" product code :");
            scanf("%s",&name);
            printf(" product prise :  ");
            scanf("%f",&prise);
            printf("product quantity : ");
            scanf("%d",&quantity);
    break;
    case 2: printf("number of product you want to add :");
            scanf("%d",&productsnumber);
            for(i=0;i<productsnumber;i++){
            printf("product number %d\n", i+1);
            printf("products name : ");
            scanf("%s",&product); 
            printf(" products code :");
            scanf("%d",&name);
            printf(" products prise :  ");
            scanf("%f",&prise);
            printf("products quantity : ");
            scanf("%d",&quantity);
                
            }
           
          
}
    return 0;
}
