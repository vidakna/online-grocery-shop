#include <stdio.h>

//global variable list Declarations
float item_cart[3][3]; //initilaze the array to 0
char item_cart_names[3];
int selected_item;
int selected_item_qty;
float totalBill = 0;
int location;

//function Declarations
void addToCart();
void displayCart();
void shippingMethod();

//calling the main function 
int main(void) {

  //this function will display the item list and save the items in the cart
  addToCart();

  //this function will display the items in the cart
  displayCart();

  //this function will display the shipping methods and display the final bill amount
  shippingMethod();

}

//this function will display the list of the available goods
void addToCart(){

  printf("Welcome to the ABC grocery shop\n\n");
    printf("You can select maximum 3 items from the list and can not exeed the quantity given in the list. Please select the option number available in the list.\n");

  for(int i = 0; i < 3; i++){

    selected_item_qty = 0;
    selected_item = 0;

    printf("\nItem Name\t\tPrice per 1 qty\t\tMax items can buy\n\n");

    //item list

    printf("1. Coconut\t\tRs. 60.00\t\t\t5\n");
    printf("2. Rice\t\t\tRs. 90.00\t\t\t10Kg\n");
    printf("3. Oil\t\t\tRs. 150.00\t\t\t2 Bottles\n");
    printf("4. Eggs\t\t\tRs. 15.00\t\t\t10\n");
    printf("5. Salt\t\t\tRs. 65.00\t\t\t2 Packets\n\n");

    printf("You have %d items left in the cart\n\n", 3-i);

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

        item_cart[i][0] = (float)selected_item;
        item_cart[i][1] = (float)selected_item_qty;
        item_cart[i][2] = 60.00;

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

        item_cart[i][0] = (float)selected_item;
        item_cart[i][1] = (float)selected_item_qty;
        item_cart[i][2] = 90.00;
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

        item_cart[i][0] = (float)selected_item;
        item_cart[i][1] = (float)selected_item_qty;
        item_cart[i][2] = 150.00;

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

        item_cart[i][0] = (float)selected_item;
        item_cart[i][1] = (float)selected_item_qty;
        item_cart[i][2] = 15.00;

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

        item_cart[i][0] = (float)selected_item;
        item_cart[i][1] = (float)selected_item_qty;
        item_cart[i][2] = 65.00;
               

        break;
    }

  }
}

//this function will display the items in the cart
void displayCart(){
  printf("\n\n========== Shopping Cart ==========\n\n");

  for(int i = 0; i < 3; i++){
     if((int)item_cart[i][0] == 1){
      totalBill = totalBill  + item_cart[i][1] * item_cart[i][2];
      printf("%s\t\t%d\t\t\t%.2f\n","Coconut",(int)item_cart[i][1],item_cart[i][2]);

    }else if((int)item_cart[i][0] == 2){
      totalBill = totalBill  + item_cart[i][1] * item_cart[i][2];
      printf("%s\t\t%d\t\t\t%.2f\n","Rice",(int)item_cart[i][1],item_cart[i][2]);

    }else if((int)item_cart[i][0] == 3){
      totalBill = totalBill  + item_cart[i][1] * item_cart[i][2];
      printf("%s\t\t\t%d\t\t\t%.2f\n","Oil",(int)item_cart[i][1],item_cart[i][2]);

    }else if((int)item_cart[i][0] == 4){
      totalBill = totalBill  + item_cart[i][1] * item_cart[i][2];
      printf("%s\t\t%d\t\t\t%.2f\n","Eggs",(int)item_cart[i][1],item_cart[i][2]);

    }else if((int)item_cart[i][0] == 5){
      totalBill = totalBill  + item_cart[i][1] * item_cart[i][2];
      printf("%s\t\t%d\t\t\t%.2f\n","Salt",(int)item_cart[i][1],item_cart[i][2]);

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