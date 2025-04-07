//Array insertion
#include<stdio.h>
void main(){
	int arr[5],i;
	printf("Enter a Elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	//Display array
	printf("Elements are: [");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]");
}