#include <stdio.h>
#include <stdbool.h>
void hello(char name[], int age);
bool agecheck(int age);

int main() {
          hello("spongebob", 30);
          if(agecheck(30)){
                    printf("You are old enough");
          }
          else{
                    printf("You are not old enough");
          }
          return 0;
}
void hello(char name[], int age){
          printf("Hello %s\n", name);
          printf("You are %d years old\n", age);
}          
bool agecheck(int age){
          return age >= 16;
}


