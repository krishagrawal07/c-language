// #include <stdio.h>
// void happybirthday(char name[], int age){
//           printf("\nHappy birthday to you!");
//           printf("\nHappy birthday to you!");
//           printf("\nHappy birthday to dear %s", name);
//           printf("\nHappy birthday to you!");
//           printf("\nyou are %d years old!\n!", age);
// }
// int main(){
//           char name[] = "Bro";
//           int age = 25;

//     happybirthday(name, age);
    
//     return 0;
// }





#include <stdio.h>
int square(int num){
          int result = num * num;

          return result;
}
int main() {
          int x = square(2);
          int y = square(3);
          int z = square(4);
          printf("%d", x);
          printf("%d", y);
          printf("%d", z);
          return 0;



}