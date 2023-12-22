#include <stdio.h>
#include <string.h>

//global variable list Declarations
int selected_item;
int selected_item_qty;
float totalBill = 0;
int location;
int no_of_items;

struct cart_item{
  int selected_item;
  int qty;
  char item_name[50];
  float single_price;
};

//function Declarations
void addToCart();
void displayCart(struct cart_item items[no_of_items],int size);
void shippingMethod();

//calling the main function 
int main(void) {

  //this function will display the item list and save the items in the cart
  addToCart();

  //this function will display the shipping methods and display the final bill amount
  shippingMethod();

}

//this function will display the list of the available goods
void addToCart(){

  printf("Welcome to the ABC grocery shop\n\n");
  printf("Enter the number of items you wish to buy : ");
  scanf("%d",&no_of_items);

  struct cart_item items[no_of_items];

  printf("\n\nPlease select the option number available in the list.\n");

  for(int i = 0; i < no_of_items; i++){

    selected_item_qty = 0;
    selected_item = 0;

    printf("\nItem Name\t\tPrice per 1 qty\t\tMax items can buy\n\n");

    //item list

    printf("1. Coconut\t\tRs. 60.00\t\t\t5\n");
    printf("2. Rice\t\t\tRs. 90.00\t\t\t10Kg\n");
    printf("3. Oil\t\t\tRs. 150.00\t\t\t2 Bottles\n");
    printf("4. Eggs\t\t\tRs. 15.00\t\t\t10\n");
    printf("5. Salt\t\t\tRs. 65.00\t\t\t2 Packets\n\n");

    printf("You have %d items left in the cart\n\n", no_of_items-i);

    printf( "Enter a value :");
    scanf("%d", &selected_item);

    switch(selected_item){
      case 1:
        printf("You have selected Coconut\n");
        printf( "Enter number of coconuts you want :");
        scanf("%d", &selected_item_qty);

        while(selected_item_qty > 5){
          printf("You have exeeded the maximinm qty amount. Please try below 5\n");

          printf( "Enter number of coconuts you want :");
          scanf("%d", &selected_item_qty);
        }

        items[i].selected_item = selected_item;
        items[i].single_price = 60.00;
        items[i].qty = selected_item_qty;
        strcpy(items[i].item_name,"Coconut");

        break;
      
      case 2:
        printf("You have selected Rice\n");
        printf( "Enter number of Rice you want in kilo grams :");
        scanf("%d", &selected_item_qty);

        while(selected_item_qty > 10){
          printf("You have exeeded the maximinm qty amount. Please try below 10Kg\n");

          printf( "Enter number of Rice you want in kilo grams :");
          scanf("%d", &selected_item_qty);
        }


        items[i].selected_item = selected_item;
        items[i].single_price = 90.00;
        items[i].qty = selected_item_qty;
        strcpy(items[i].item_name,"Rice");

        break;

      case 3:
        printf("You have selected Oil\n");
        printf( "Enter number of Oil bottles you want :");
        scanf("%d", &selected_item_qty);

        while(selected_item_qty > 2){
          printf("You have exeeded the maximinm qty amount. Please try below 2\n");

          printf( "Enter number of Oil bottles you want :");
          scanf("%d", &selected_item_qty);
        }



        items[i].selected_item = selected_item;
        items[i].single_price = 150.00;
        items[i].qty = selected_item_qty;
        strcpy(items[i].item_name,"Oil");

        break;

      case 4:
        printf("You have selected Eggs\n");
        printf( "Enter number of Eggs you want :");
        scanf("%d", &selected_item_qty);

        while(selected_item_qty > 10){
          printf("You have exeeded the maximinm qty amount. Please try below 10\n");

          printf( "Enter number of Eggs you want :");
          scanf("%d", &selected_item_qty);
        }



        items[i].selected_item = selected_item;
        items[i].single_price = 15.00;
        items[i].qty = selected_item_qty;
        strcpy(items[i].item_name,"Eggs");

        break;

      case 5:
        printf("You have selected Salt\n");
        printf( "Enter number of Salt packets you want :");
        scanf("%d", &selected_item_qty);

        while(selected_item_qty > 2){
          printf("You have exeeded the maximinm qty amount. Please try below 2\n");

          printf( "Enter number of Salt packets you want :");
          scanf("%d", &selected_item_qty);
        }

        items[i].selected_item = selected_item;
        items[i].single_price = 65.00;
        items[i].qty = selected_item_qty;
        strcpy(items[i].item_name,"Salt");

        break;
    }

  }

  displayCart(items,no_of_items);

}

//this function will display the items in the cart
void displayCart(struct cart_item items[no_of_items],int size){
  printf("\n\n========== Shopping Cart ==========\n\n");

  for(int i = 0; i < no_of_items; i++){
     if(items[i].selected_item == 1){
      totalBill = totalBill  + (float)items[i].qty * items[i].single_price;
      printf("%s\t\t%d\t\t\t%.2f\n","Coconut",items[i].qty,items[i].single_price);

    }else if(items[i].selected_item  == 2){
      totalBill = totalBill  + (float)items[i].qty * items[i].single_price;
      printf("%s\t\t%d\t\t\t%.2f\n","Rice",items[i].qty,items[i].single_price);

    }else if(items[i].selected_item  == 3){
      totalBill = totalBill  + (float)items[i].qty * items[i].single_price;
      printf("%s\t\t\t%d\t\t\t%.2f\n","Oil",items[i].qty,items[i].single_price);

    }else if(items[i].selected_item  == 4){
      totalBill = totalBill  + (float)items[i].qty * items[i].single_price;
      printf("%s\t\t%d\t\t\t%.2f\n","Eggs",items[i].qty,items[i].single_price);

    }else if(items[i].selected_item  == 5){
      totalBill = totalBill  + (float)items[i].qty * items[i].single_price;
      printf("%s\t\t%d\t\t\t%.2f\n","Salt",items[i].qty,items[i].single_price);

    }
    
  }
   
}

//this function will determind the shipping method
void shippingMethod(){
  printf("\nAre you living in these areas? If yes select the option number, we will ship your order. If not select 6\n\n");

  printf("1. Kadawatha\n");
  printf("2. Kiribathgoda\n");
  printf("3. Ragama\n");
  printf("4. Wattala\n");
  printf("5. Kelaniya\n");
  printf("6. I am not living in none of those areas\n\n");

  printf("Select the option : ");
  scanf("%d",&location);

  switch(location){
    case 1:
      printf("\nYour total bill amount is %.2f\n",totalBill + 100.00);
      printf("PS: Total bill amount = total amount for the items + shipping fees(Rs.100.00)\n");

      break;

    case 2:
      printf("\nYour total bill amount is %.2f\n",totalBill + 200.00);
      printf("PS: Total bill amount = total amount for the items + shipping fees(Rs.200.00)\n");

      break;

    case 3:
      printf("\nYour total bill amount is %.2f\n",totalBill + 250.00);
      printf("PS: Total bill amount = total amount for the items + shipping fees(Rs.250.00)\n");

      break;

    case 4:
      printf("\nYour total bill amount is %.2f\n",totalBill + 300.00);
      printf("PS: Total bill amount = total amount for the items + shipping fees(Rs.300.00)\n");

      break;

    case 5:
      printf("\nYour total bill amount is %.2f\n",totalBill + 275.00);
      printf("PS: Total bill amount = total amount for the items + shipping fees(Rs.275.00)\n");

      break;

    case 6:
      printf("\nYour total bill amount is %.2f",totalBill + 0.00);
      printf("Your order has successfully compleated.\n You can visit our store to grab your parcel.\n");

      break;
  }
}