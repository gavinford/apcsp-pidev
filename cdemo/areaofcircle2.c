#include <stdio.h>

float areaOfCircle(float r) 
{
  float area = (3.14*r*r);
  return area;
}

int main()
{
  float low;
  float high;
  printf("input minimum radius:\n");
  scanf("%f", &low);
  printf("input maximum radius:\n");
  scanf("%f", &high);
  for (float r=low; r<=high; r++)
    {
    float finalarea = areaOfCircle(r);
    printf("area of circle with radius of %f units: %f units squared.\n", r, finalarea);
    }
}
