#include <stdio.h>

int main()
{
  float d;
  float e;
  float* pointer1;
  float* pointer2;
  pointer1 = &d;
  pointer2 = &e;
  *pointer1 = 7.65;
  *pointer2 = 0.01;

  printf("The initial value of d is  %f \n", *pointer1);
  printf("The initial value of e is  %f \n", *pointer2);
  float temp = *pointer2;
  *pointer2 = *pointer1;
  *pointer1 = temp;
  printf("The new value of d is now %f \n", *pointer1);
  printf("The new value of e is now %f \n", *pointer2);
}
