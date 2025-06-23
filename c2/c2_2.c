// #include <stdio.h>
// #include<stdbool.h>
// int main() {
//           float price = 10.00;
//           bool isStudent = true;
//           if(isStudent){
//                     printf("You get a discount of 10percent\n ");
//                     price *= 0.9; 

//           }
//           printf("the price of a ticket is: %.2f\n", price);

//           return 0;

// }







#include <stdio.h>
#include<stdbool.h>
int main(){
          float price = 10.00;
          bool isStudent = true;
          bool issenior = true;

          if(isStudent){
              if(issenior){
                    printf("You get a discount of 10percent\n ");
                    printf("You get a discount of 20percent\n ");
                    price *= 0.7; 


               }
          else{
                    printf("You get a discount of 10percent\n ");
                    price *= 0.9;
          }

          }
          printf("the price of a ticket is: %.2f\n", price);

          return 0;

}