#include <stdio.h>

  int main()
  {
    double number;
    a:
    printf("\nEnter a number:");
    scanf("%lf", &number);
    {
      if (number < 0.0){
        printf("number is negative");
        goto a;
      }
      else
      {
        printf("number is positive");
      }
    }
    return 0; 
  }