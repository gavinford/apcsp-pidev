#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[26];
  for (int i=0; i<26; i++){
    str1[i] = 97 + i;
  }
  char str2 [] = "abcdefghijklmnopqrstuvwxyz";
  if (strcmp(str1, str2) == 0)
     printf("lowercase strings are the same\n");
  else
     printf("lowercase strings are not the same\n");

  for (int i = 0; i < 26; i++){
    str2[i] = str2[i] - 32;
  }
  if (strcmp(str1, str2) == 0)
     printf("change unsuccessful\n");
  else
     printf("change successful\n");
  
  char str3[52];
  strcpy(str3, str1);
  strcat(str3, str2);
  printf("lowercase: %s\n", str1);
  printf("uppercase: %s\n", str2);
  printf("both: %s\n", str3);
}
