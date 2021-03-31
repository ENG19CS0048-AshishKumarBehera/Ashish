#include<stdio.h>
int main()
{
  float h, d, b, volume;
  printf("Enter height: ");
  scanf("%f", &h);
  printf("Enter depth: ");
  scanf("%f", &d);
  printf("Enter breadth: ");
  scanf("%f", &b);
  volume = (1/3)*((h*d*b)+(d/b));
  printf("Volume of tromboloid is: %f \n", volume);
  return 0;
}
