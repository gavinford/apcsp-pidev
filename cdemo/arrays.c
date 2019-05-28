#include <stdio.h>

void arrayAdd(int arr[], int s, int n){
  for(int i = 1; i<=s; i=i+n){
  arr[i]=i*i;
  printf("%d\n", arr[i]);
  }
}

int main()
{
 int data[100];
 arrayAdd(data,100,1);
}
