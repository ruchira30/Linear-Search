#include<stdio.h>
#define size 5

int main()
{
	int arr[5] ={25,30,35,40,45};
	int n; int i;
	printf("Enter element to be searched: ");
	scanf("%d",&n);
	if(n>arr[size -1])
	{
		printf("Element not found");
		return -1;
	}
	for(i=0;i<5;i++)
	{
		if(n==arr[i])
		{
		 printf("Found, %d",i);
		 return arr[i];	
		}
		else if(n<arr[i])
		{
			printf("Element not found");
			return -1;
		}
	}
	return 0;
}

