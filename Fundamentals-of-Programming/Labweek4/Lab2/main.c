#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[3], x;
  int m = 0;
  for (x = 0; x < 3; x++)
  {
    scanf("%d", &a[x]);
    switch (x)
        {
        case 0:
        {
          m = a[x];
          break;
        }
        case 1:
        {
          goto b; 
          break;
        }
        case 2:
        {
          goto b;
          break;
        }
      }
  b:
  {
    switch (m < a[x])
      {
      case 1:
      {
        m = a[x];
        break;
      }
     }
    }
  }
  printf("Max number is %d",m);
  return 0;
}
