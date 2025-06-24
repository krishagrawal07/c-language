// #include <stdio.h>
// int main(){
//           int age = 25;
//           int *page = &age;
//           printf("%p",&age);
//           printf("%p", page);
//           return 0;


// }

#include <stdio.h>
 int main(){
          int age = 25;
          int *page = &age;
          birthday(&age);
          printf("You are %d years old", age);
          return 0;

}
void birthday(int* age){

          (*age++);
}




