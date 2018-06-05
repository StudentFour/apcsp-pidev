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
  printf("This is the shopping list: -\n");
  printf("  Items: %s\n", student->firstnm);
//  printf("  Last Name: %s\n", student->lastnm);
 // printf("  Age: %d\n", student->age);
  //printf("  Student ID: %d\n", student->studentid);
}

int main()
{
	char input[256];
	printf("Add new item? 1 = yes  0 = no\n");
	fgets(input, 256, stdin);
	int yn = 2;
	sscanf(input, "%d", &yn);
	struct Student mystudent[10];
	int studentnum = 0;
		while (yn ==  1)
		{
				for (int i = studentnum; i < studentnum + 1; i++)
				{

					printf("Item 1:\n");
					fgets(input, 256, stdin);
					char a[50];
					sscanf(input, "%s", a);
					strcpy(mystudent[i].firstnm, a);
				}
        	

	studentnum++;
                        printf("Add another item? 1 = yes  0 = no\n");
                        fgets(input, 256, stdin);
                        sscanf(input, "%d", &yn);break;
		}

				//	printf("Item 2:\n");
                                  //      fgets(input, 256, stdin);
				//	char b[50];
                                  //      sscanf(input, "%s", b);
				//	strcpy(mystudent[i].lastnm, b);
					
				//	printf("Item 3:\n");
                                  //      fgets(input, 256, stdin);
				//	int c;
                                  //      sscanf(input, "%d", &c);
				//	mystudent[i].age = c;

                                  //      printf("Item 4:\n");
                                    //    fgets(input, 256, stdin);
				//	int d;
                                  //      sscanf(input, "%d", &d);
				//	mystudent[i].studentid = d;
			//	}
		
        printf("Here's your shopping list:\n");
	for (int i = 0; i < studentnum; i++)
	{
		printStudent(&mystudent[i]);
		//won't compile here: says "neither an array nor a pointer nor a vector"
	}

}
