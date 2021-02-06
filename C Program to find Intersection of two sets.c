#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],b[10],m,n,i,j;
	int c[20],k=0,flag=0;
	int ch;
	printf("Enter the number of elements in first set:\n");
	scanf("%d",&m);
	printf("Enter the elements:\n");
	for(i=0;i<m;i++)
	{							
		scanf("%d",&a[i]);
	}
	printf("\nElemets of first set:\n");
	for(i=0;i<m;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the number of elements in second set:\n");
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nElements of second set:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	for(i=0;i<m;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			c[k]=a[i];
			k++;
		}
	}
	if (k==0)
	{
		printf("\n\nResultant set is null set!\n");
	}
	else
	{
		printf("\nElement of resultant set\n");
		for(i=0;i<k;i++)
		{
			printf("%d\t",c[i]);
		}
	}
	return 0;
}
