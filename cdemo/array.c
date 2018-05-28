#include <stdio.h>

int arr[100];
int arrSize = 100;
int incrementBy = 20;

void arrayAdd(int s, int n)
{
  printf("\nArray values incremented by %d:\n", n);
  for (int i = 0; i < s; i++)
  {
    arr[i] = arr[i] + n;
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i*i;
    printf("%d ", arr[i]);
  }
  printf("\n");
  arrayAdd(arrSize, incrementBy);
}
