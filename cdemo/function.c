#include <stdio.h>

//function: areaOfCircle
float areaOfCircle(float i)
{
  return (3.14 *(i*i));
}


int main()
{
  float r;
  for (float i = 3.5; i <= 12.5; i++)
  {
    r = areaOfCircle(i); 
    printf("The area of a circle with radius %f is %f\n", i, r);
  }
}
