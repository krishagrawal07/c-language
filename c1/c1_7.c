#include <stdio.h>
int main() {

          int choice = 0;
          float pounds = 0.0f;
          float kilograms = 0.0f;

          printf("Weight conversion calculator ");
          printf("1. kilograms to pounds\n");
          printf("2. pounds to kilograms\n");
          printf("choose between 1 and 2");
          scanf("%d", &choice);

          if(choice==1){
                    printf("Enter the weight in kilograms: ");
                    scanf("%f", &kilograms);
                    pounds = kilograms * 2.20462;
                    printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
          }
          else if(choice==2){
                    printf("Enter the weight in pounds: ");
                    scanf("%f", &pounds);
                    kilograms = pounds / 2.20462;
                    printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
          }
          else{
                    printf("invalid");
          }

         return 0;


}