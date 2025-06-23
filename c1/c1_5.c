// #include <stdio.h>
// #include <math.h>

// int main()
// {   
//           int x = 2;
//           //x = pow(x, 2); and  x = sqrt(x)
//          printf("%d", x);
          
//           return 0;
// }




// #include <stdio.h>
// #include <math.h>

// int main()
// {   
//           int x = 2;
//           //x = round(x) and x = ceil() and x = floor(x) and x = abs(x) this is when we have to find its distance from 0 and x = log(x)
//          printf("%d", x);
          
//           return 0;
// }






#include  <stdio.h>
#include <math.h>

int main()
{
          double radius = 0.0;
          double area = 0.0;
          const double PI = 3.14159;
          printf("Enter the radius: ");
          scanf("%lf" , &radius);

          area = PI * pow(radius, 2);
          printf("Area: %lf", area);
          return 0; 
}


