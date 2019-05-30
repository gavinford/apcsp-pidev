#include "student.h"
void printStudent(struct Student* student){
    printf("%s %s:\n", student->first, student->last);
    printf("age: %d\n",student->age);
    printf("student ID: %d\n\n", student->studentid);
}
