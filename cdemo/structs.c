#include <stdio.h>
#include <string.h>

struct Student {
  char firstnm[50];
  char lastnm[50];
  int age;
  int studentid;
};

void printStudent(struct Student* student)
{
  printf("My student is -\n");
  printf("  First Name: %s\n", student->firstnm);
  printf("  Last Name: %s\n", student->lastnm);
  printf("  Age: %d\n", student->age);
  printf("  Student ID: %d\n", student->studentid);
}

int main()
{
	char input[256];
	printf("Add new student? Respond with 1 for yes or 0 for no.\n");
	fgets(input, 256, stdin);
	int yn = 2;
	sscanf(input, "%d", &yn);
	struct Student mystudent[10];
	int studentnum = 0;
		while (yn ==  1)
		{
		for (int i = studentnum; i < studentnum + 1; i++)
		{
		printf("Student First Name:\n");
		fgets(input, 256, stdin);
		char a[50];
		sscanf(input, "%s", a);
		strcpy(mystudent[i].firstnm, a);

		printf("Student Last Name:\n");
                fgets(input, 256, stdin);
		char b[50];
                sscanf(input, "%s", b);
		strcpy(mystudent[i].lastnm, b);

		printf("Student Age:\n");
                fgets(input, 256, stdin);
		int c;
                sscanf(input, "%d", &c);
		mystudent[i].age = c;

                printf("Student ID:\n");
                fgets(input, 256, stdin);
		int d;
                sscanf(input, "%d", &d);
		mystudent[i].studentid = d;
		}

		studentnum++;
		printf("Add another student? Respond with 1 for yes and 0 for no.\n");
		fgets(input, 256, stdin);
		sscanf(input, "%d", &yn);
		}
	printf("The student list is:\n");
	for (int i = 0; i < studentnum; i++)
	{
		printStudent(&mystudent[i]);
	}

}
