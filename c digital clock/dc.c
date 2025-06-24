#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main(){
          time_t rawtime = 0;
          struct tm *pTime = NULL;
          bool isRunning = true;
          printf("Digital clock\n");

          while(isRunning){
                    time(&rawtime);

                    printf("%ld\n", rawtime);
                    sleep(1);
          }
          return 0;

}