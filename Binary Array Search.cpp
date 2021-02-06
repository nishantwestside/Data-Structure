#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a[1000];
	int i, n;
	int search, found;
	printf("Enter the number of elements in the array: \n");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to search: \n");
	scanf("%d", &search);
	found=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("\n%d is found at position %d", search, i++);
	}
	else
	{
		printf("\n%d is not found in the array", search);
	}
	getch();
}
