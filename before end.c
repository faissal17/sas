#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// global variable
int i;
int j;
int productsnumber;
int SizeTAB=0;
char ByQuantiti;
int  ByCode;
// structur
typedef struct{
char name [100];
int code;
float prise;
int quantity;
}ajoute;
 ajoute Product [200];
 // function section
void add(){
	system("cls");
            printf("product name : ");
            scanf("%s",Product[SizeTAB].name);  
            printf(" product code :");
            scanf("%d",&Product[SizeTAB].code);
            printf(" product prise :  ");
            scanf("%f",&Product[SizeTAB].prise);
            printf("product quantity : ");
            scanf("%d",&Product[SizeTAB].quantity);
            SizeTAB++;
}
void severalProduct(){
	    system("cls");
            printf("number of product you want to add :");
            scanf("%d",&productsnumber);
            for(i=0;i<productsnumber;i++){
            printf("product number %d\n", i+1);
            add();
            }
        }
// show section
void show   (){
	system("cls");
    ajoute R;
    for(int i =0;i<SizeTAB;i++){
        for (j=i+1;j<SizeTAB;j++){
        if(Product[i].prise<Product[j].prise){
           R = Product[i];
           Product[i] = Product[j];
           Product[j] = R;
        }
    } 
     printf("name : %s \n",Product[i].name);
     printf("code : %d \n",Product[i].code);
     printf("prise : %.2f dh\n",Product[i].prise);
     printf("quantity : %d \n",Product[i].quantity);
    }
}
void liste(){
	system("cls");
       ajoute temp[SizeTAB];
      for (i=0;i<SizeTAB;i++){
         for (j=i+1;j<SizeTAB;j++){
             if(Product[i].prise<Product[j].prise){
             }
         }
    }
    show();
}
void search(){
	system("cls");
	int s,nbr;
	printf("1. search by code\n");
    printf("2. search by quantity\n\n");
	do{
	scanf("%d",&nbr);
	if(nbr!=1 && nbr!=2) printf("number not found \n");
    }while(nbr!=1 && nbr!=2);
    if(nbr==1){
    	printf("entre the code");
    	scanf("%d",&s);
    	 for(i=0; i<SizeTAB; i++){
    	 	if(s == Product[i].code){
            	printf("product name : %s\n",Product[i].name);
            	printf("product code : %d\n",Product[i].code);
            	printf("product prise : %.2f dh\n",Product[i].prise);
            	printf("product quantity : %d\n",Product[i].quantity);
			}
		 }
            
	}else{
		printf("entre the quantity");
    	scanf("%d",&s);	 
		    for(i=0; i<SizeTAB; i++){
    	 	if(s == Product[i].quantity){
            	printf("product name : %s\n",Product[i].name);
            	printf("product code : %d\n",Product[i].code);
            	printf("product prise : %.2f dh\n",Product[i].prise);
            	printf("product quantity : %d\n ",Product[i].quantity);
			}
		 }
    	
		}
	}
	void stock(){
		system("cls");
		for (i=0;i<SizeTAB;i++){
			if(Product[i].quantity<3){
	 printf("name : %s \n",Product[i].name);
     printf("code : %d \n",Product[i].code);
     printf("prise : %.2f dh\n",Product[i].prise);
     printf("quantity : %d \n",Product[i].quantity);
			}
		}
	}

	void buyproduct(){
		system("cls");
	    int c,UserQuantity;
	    char ansewr;
	    buy:
	    printf("the code of product you want to buy : ");
	    scanf("%d",&c);
	    for (i=0;i<SizeTAB;i++){
	        if(Product[i].code==c){
	             show();
	             printf("is this the product you want to buy (y/n):\n");
	             scanf("%s",&ansewr);
	         if(ansewr == 'y' || ansewr == 'Y'){
	             printf("number of product you want to buy : ");
	             scanf("%d",&UserQuantity);
	             Product[i].quantity-=UserQuantity;
	   }else if (ansewr == 'n' || ansewr == 'N') {
	           goto buy;
	   }
	   }else {
	        printf("the code is not found \n");
	    }
	  }
	}
	void deletproduct(){
		system("cls");
	    int a,b;
	    printf("entre the code of product you want to delet : ");
	    scanf("%d",&a);
	    for (i=0;i<SizeTAB;i++){
	        if(Product[i].code==a){
	   for (b=i;b<SizeTAB;b++){
	        Product[b]=Product[b+1];
	    }
	        }
	    }
	    SizeTAB--;
	}
	
int main(){
    // MENU
    int choice;
    do {
printf("------MENU------\n");
printf("~~~~~~1- add a new product: \n");
printf("~~~~~~2- add several new products : \n");
printf("~~~~~~3- show product : \n");
printf("~~~~~~4- search on pruduct : \n");
printf("~~~~~~5- stock of product : \n");
printf("~~~~~~6- buy pruduct : \n");
printf("~~~~~~7- delete a product : \n");
printf("entre your choice : ");
scanf("%d",&choice);
switch (choice){
    case 1 :
    add();
    break;
    case 2 :
	severalProduct();
    break;
    case 3 :
	liste();	
    break;
    case 4 :
	search();
    break;
    case 5 : 
    stock();
    break;
    case 6 :
	buyproduct();
    break;
    case 7 :
    deletproduct();
    break;
   
}
}while(choice!=0);
    return 0;
    }
