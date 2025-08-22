#include <stdio.h>

int main() 
{

     int i=0;
    int number[8];
    int max , min;
 
    for(int i=0; i<8; i++)
    {
      printf("Enter value %d:", i+1);
      scanf("%d", &number[i]);
    }

    max = min = number[0];

    for(int i=0; i<8; i++)
    {

      if(number[i]<min)
      {
        min=number[i];
      }

      if (number[i]>max)
      {
        max=number[i];
      }

    }
    printf("Smallest number %d\n:",min);

    printf("Largest number %d\n:",max);


return 0;
}
 