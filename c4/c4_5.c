// #include<stdio.h>
// #include <stdbool.h>
// int main(){
//           bool isonline = true;
//           printf("%s", (isonline) ? "online" : "offline");
//           return 0;


// }




#include <stdio.h>
#include <stdbool.h>
int main(){

          int hours = 11;
          int minutes = 30;
          printf("%d %d %s", hours, minutes, (hours < 12) ? "AM" : "PM");
          return 0;

}