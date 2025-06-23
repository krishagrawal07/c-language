// #include <stdio.h>
// int main() {


//      int age = 12;
//      if(age>=18){
//           printf("You are adult ");
//           }
//           else if(age < 0){
//                     printf("You have not born yet ");
//           }
//           else if(age == 0){
//                     printf("You are newborn ");
//           }
//           else{
//           printf("You are child ");
//           }

//           return 0;


// }







#include<stdio.h>
int main(){

          char name[50] = "";
          printf("Enter your name : ");
          fgets(name, sizeof(name), stdin);
          name[strlen(name) - 1 ] = '\0';

          if(strlen(name) == 0) {
                    printf("You did not enter your name");
          
          }
          else{
                    printf("Hello %s ", name);
          }
}