#include <stdio.h>
#include <string.h>

int main()
{

char str1[27];
char alph = 'a';

for (int i = 0; i < 26; i++)
{
	str1[i] = alph + i;
}
 

char str2[] = "abcdefghijklmnopqrstuvwxyz";

if (strcmp(str1, str2) == 0)
{
	printf("the strings are the same\n");
}
else 
{
	printf("the strings are different\n");
}

for (int j=0; j<26; j++)
{
	str1[j] = str1[j] - 32;
}
if (strcmp(str1, str2) == 0)
{
printf("the strings are the same\n");
}
else
{
printf("the strings are different\n");
}

char str3[54];
strcpy(str3, str1);
strcat(str3, str2);
printf("str1 is %s, str2 is %s, str3 is %s\n", str1, str2, str3);


}
