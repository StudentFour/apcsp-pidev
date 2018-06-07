#include <stdio.h>
#include <string.h>

struct List {
  char Item[50];
  int Quantity;
};

void printList(struct List* item)
{
  printf("  Item: %s\n", item->Item);
  printf("    Quantity: %d\n", item->Quantity);
}

int main()
{
	char input[256];
	printf("Add new item? 1 = yes  0 = no\n");
	fgets(input, 256, stdin);
	int yn = 2;
	sscanf(input, "%d", &yn);
	struct List myitem[10];
	int itemnum = 0;
		while (yn ==  1)
		{
				for (int i = itemnum; i < itemnum + 1; i++)
				{

					printf("Item:\n");
					fgets(input, 256, stdin);
					char a[50];
					sscanf(input, "%s", a);
					strcpy(myitem[i].Item, a);
					
					
					printf("Quantity:\n");
                                        fgets(input, 256, stdin);
					int c;
                                        sscanf(input, "%d", &c);
					myitem[i].Quantity = c;

				}
			itemnum++;
			printf("Add new item? 1 = yes  0 = no\n");
			fgets(input, 256, stdin);
			sscanf(input, "%d", &yn);
		}
	printf("Here's your shopping list...\n");
	for (int i = 0; i < itemnum; i++)
	{
		printList(&myitem[i]);
	}

}
