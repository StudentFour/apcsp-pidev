#include <stdio.h>

 
int check_anagram(char a[], char b[])
{
  int first[26] = {0}, second[26] = {0}, c = 0;

  while (a[c] != '\0')
  {
    first[a[c]-'a']++;
    c++;
  }
 
  c = 0;
 
  while (b[c] != '\0')
  {
    second[b[c]-'a']++;
    c++;
  }
  
  for (c = 0; c < 26; c++)
  {
    if (first[c] != second[c])
    return 0;
  } 
  return 1;
}



int main(int argc, char* argv[])
{ 
  if (argc != 3)
  {
    printf("%s : expected 2 args, please enter two integers\n", argv[0]);
    return 1;
  }
  int arg1;
  int found = sscanf(argv[1], "%d", &arg1);
  if (found != 1)
  {
    printf("first arg is not an integer, enter two ints\n");
    return 1;
  }

  int arg2;
  found = sscanf(argv[2], "%d", &arg2);
  if (found != 1)
  {
    printf("second arg is not an integer, enter two ints\n");
    return 1;
  }
   
printf("Check if two words are anagrams\n\n");

  char a[100], b[100];
 
  printf("Enter a word:\n");
  scanf(a);
 
  printf("Enter a word:\n");
  scanf(b);
 
  if (check_anagram(a, b) == 1)
    printf("These words are anagrams. A ragman!\n");
  else
    printf("These words aren't anagrams.\n");
 
  return 0;
}
