#include <stdio.h>
#include <string.h>
#include "student.h"
int main(){
  char input[15];
  char first[15];
  char last[15];
    int count, age, id;
    printf("how many students are in the structure?\n");
    fgets(input, 15, stdin);
    sscanf(input, "%d", &count);
    struct Student student[10];
    for (int i = 0; i < count; i++){
    printf("\nStudent %d\n", i + 1);
        printf("first name:\n");
        fgets(input, 30, stdin);
        sscanf(input, "%s",first);
        printf("last name:\n");
        fgets(input, 30, stdin);
        sscanf(input, "%s", last);
        printf("age:\n");
        fgets(input, 30, stdin);
        sscanf(input, "%d", &age);
        printf("student ID:\n");
        fgets(input, 30, stdin);
        sscanf(input, "%d", &id);
        strcpy(student[i].first, first);
        strcpy(student[i].last, last);
        student[i].age = age; 
        student[i].studentid = id;
    }
    for (int i = 0; i < count; i++){
        printStudent(&student[i]);
    }
}
