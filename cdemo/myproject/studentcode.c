#include <stdio.h>
#include <string.h>
#include "student.h"

void printStudent(struct Student* student)
{
  printf("My student is -\n");
  printf("  First Name: %s\n", student->firstnm);
  printf("  Last Name: %s\n", student->lastnm);
  printf("  Age: %d\n", student->age);
  printf("  Student ID: %d\n", student->studentid);
}
