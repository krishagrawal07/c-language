#include <stdio.h>
int main(){
// shopping cart
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

     printf("What item would you like to buy: ");
     fgets(item, sizeof(item), stdin);

     printf("What is the price for each: ");
     scanf("%f", &price);

     printf("How many would you like: ");
     scanf("%d", &quantity);

     total = price * quantity;
     printf("%f", total);

     return 0 ;
}