#include <stdio.h>
int main(){
    int numbers[][3] = {{1,2,3},
                      {4,6,9},
                      {7,8,5}};
    printf("%d", numbers[0][0]);                  
    printf("%d", numbers[0][1]);                  
    printf("%d", numbers[0][2]);
    return 0;                  



}