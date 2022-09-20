#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// global variable
char name [100];
int code;
float prise;
int quantity;
int choice;
int i;
int j;
int productsnumber;
int SizeTAB=0;
// structur
typedef struct{
char name [100];
int code;
int prise;
int quantity;
// function section
}ajoute;
 ajoute Product [100];
 // show section
void show   (){
    for(int i =0;i<SizeTAB;i++){
     printf("name : %s \n",Product[i].name);
     printf("code : %d \n",Product[i].code);
     printf("prise : %d \n",Product[i].prise);
     printf("quantity : %d \n",Product[i].quantity);
    }
   
    }
    void liste(){
       ajoute temp[SizeTAB];
      for (i=0;i<SizeTAB;i++){
         for (j=i+1;j<SizeTAB;j++){
             if(Product[i].prise<Product[j].prise){
                temp[i].prise=Product[i].prise;
                Product[i].prise=Product[j].prise;
                 Product[j].prise=temp[i].prise;
             }
         }
    }
    show();
}
void add(){
            printf("product name : ");
            scanf("%s",Product[SizeTAB].name);  
            printf(" product code :");
            scanf("%d",&Product[SizeTAB].code);
            printf(" product prise :  ");
            scanf("%d",&Product[SizeTAB].prise);
            printf("product quantity : ");
            scanf("%d",&Product[SizeTAB].quantity);
            SizeTAB++;
}
void severalProduct(){
            printf("number of product you want to add :");
            scanf("%d",&productsnumber);
            for(i=0;i<productsnumber;i++){
            printf("product number %d\n", i+1);
            add();
            }
        }
int main(){
    // MENU
    debaut:
printf("------MENU------\n");
printf("~~~~~~1- add a new product: \n");
printf("~~~~~~2- add several new products : \n");
printf("~~~~~~3- show product : \n");
printf("~~~~~~4- search on pruduct : \n");
printf("~~~~~~5- buy pruduct : \n");
printf("~~~~~~6- delete a product : \n");
printf("entre your choice : ");
scanf("%d",&choice);
switch (choice){
    case 1 :add();
    goto debaut;
    break;
    case 2 :severalProduct();
    goto debaut;
    break;
    case 3 :liste();
    goto debaut;
    break;
    
}

    return 0;
    }
    

