//Searching an element from an array
#include<stdio.h>
void main()
{
	int arr[5],i,element;
	//Insert elements
	printf("Enter Elements of array(MAX 5): ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	//display elements
	printf("Array elements are: \n[");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]\n");
	//Choose which element want to search
	printf("Enter the element you want to search:\n");
	scanf("%d",&element);
	for(i=0;i<5;i++)
	{
		if(arr[i] == element){
			printf("Your searched element =%d and index Number =%d",arr[i],i);
		}
	}
}